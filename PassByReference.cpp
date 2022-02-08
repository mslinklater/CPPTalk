#include <iostream>

class Data
{
public:
    Data()
    :payload(999)
    { 
        std::cout << "[Constructor]" << std::endl; 
    }

    ~Data()
    { 
        std::cout << "[Destructor]" << std::endl; 
    }

    Data(const Data &p1)
    { 
        payload = p1.payload; 
        std::cout << "[Copy Constructor]" << std::endl; 
    }

    Data operator=(const Data& p1)
    {
        payload = p1.payload;
        std::cout << "[Assignment Operator]" << std::endl; 
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

int main(int argv, char** argc)
{
    System system;
    Data data;

    std::cout << "---" << std::endl;

    //system.SetByValue(data);
    //system.SetByRef(data);

    std::cout << "---" << std::endl;

    return 0;
}