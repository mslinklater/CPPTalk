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
        std::cout << "[operator=]" << std::endl; 
        return *this;
    }

    int payload;
};


int main(int argv, char** argc)
{
    Data first;

    std::cout << "---" << std::endl;

#if 1
    Data second;    
    second = first;
#else
    Data second(first);
#endif

    std::cout << second.payload << std::endl;

    return 0;
}