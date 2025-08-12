#include <iostream>

int main()
{
    int a = 20;
    int b = 100;
    int help;

    std::cout << "A = " << a << ", B = " << b << std::endl; 

    // Tausche a und b
    help = a;
    a = b;
    b = help;

    std::cout << "A = " << a << ", B = " << b << std::endl;
}
