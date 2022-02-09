#include <iostream>

#if 1
#define max(a,b) (a > b ? a : b)
#else
inline static int max(int a, int b){ return a > b ? a : b; }
#endif

int main(int argc, char** argv)
{
    int a = 5;
    int b = 10;

    std::cout << max(a,b) << std::endl;

#if 0
    std::cout << "---" << std::endl;

    for(int i=0 ; i<10 ; i++)
    {
        int c = max(a++, b--);
        std::cout << c << std::endl;
    }
#endif

    return 0;
}
