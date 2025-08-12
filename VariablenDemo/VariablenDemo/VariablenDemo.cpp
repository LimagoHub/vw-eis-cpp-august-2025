#include <iostream>

int summe(int a, int b);
void tausche(int &a, int &b);

int main()
{
    int x = 3;// Lokale Variable
    int y = 4;
    tausche(x, y);
    std::cout << x << " " << y;
}

int summe(int a, int b) {
    // Uebergabe byVal, d.h Variable wird kopiert
    return a + b;
}

void tausche(int &a, int &b) { 
    // Uebrgabe by Ref, d.h Variable wird gemeinsam genutzt
    int help = a;
    a = b;
    b = help;
}
