#include <iostream>

int main()
{
    const unsigned long long bevoelkerung = 8000000000ULL;
    unsigned long long aktiveSpieler = 1ULL;
    unsigned short nachfolgerFaktor=2;
    unsigned short rundenZaehler = 0;

    while(aktiveSpieler < bevoelkerung)
    {
        rundenZaehler++;
        aktiveSpieler *= nachfolgerFaktor;

    }

    std::cout << "Ende nach " << rundenZaehler << "Runden\n";
}

