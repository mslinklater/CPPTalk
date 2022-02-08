
class Data
{
public:
    Data()
    :payload(999)
    { 
    }

    ~Data()
    { 
    }

    Data(const Data &p1)
    { 
        payload = p1.payload; 
    }

    Data operator=(const Data& p1)
    {
        payload = p1.payload;
        return *this;
    }

    int payload;
};

class System
{
public:
    void SetByValue(Data dataIn){ data = dataIn; }

    void SetByRef(const Data& dataIn){ data = dataIn; }

private:
    Data data;
};

static void ByRef(benchmark::State& state)
{
  System system;
  Data data;

  for (auto _ : state)
  {
    system.SetByRef(data);
  }
}

BENCHMARK(ByRef);

static void ByVal(benchmark::State& state)
{
  System system;
  Data data;

  for (auto _ : state)
  {
    system.SetByValue(data);
  }
}

BENCHMARK(ByVal);
