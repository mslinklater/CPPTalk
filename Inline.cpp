#include <iostream>

int Fred(int a)
{
    return a + 1;
}

inline int George(int a)
{
    return a + 1;
}

int main(int argc, char** argv)
{
//    int a = Fred(5);
//    std::cout << a << std::endl;

//    int b = George(6);
//    std::cout << b << std::endl;

    return 0;
}

// 1
// inline is stripped if not called
