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

    int payload;
};

class System
{
public:
    Data RetByValue(){ return data; }

    const Data& RetByRef(){ return data; }

private:
    Data data;
};


int main(int argv, char** argc)
{
    System system;

    // print value of system.payload

    // std::cout << "Data payload " << system.RetByValue().payload << std::endl;

    // std::cout << "Data payload " << system.RetByRef().payload << std::endl;

    return 0;
}