#include <iostream>
// Brutto->double
void ausgabe(unsigned int durchlaeufe);

double brutto(double netto);

double summe(double a, double b);

int main()
{
    std::cout << "Start!\n";
    
    double ergebnis = brutto(100);

    std::cout << ergebnis << std::endl;

    std::cout << summe(20,30) << std::endl;
    return 0;
}

void ausgabe(unsigned int durchlaeufe) {
    for (size_t i = 0; i < durchlaeufe; i++)
    {
        std::cout << "Hello World!\n";
    }


}

double brutto(double netto) {
    double rueckgabe = netto * 1.19;
    return rueckgabe;
}

double summe(double a, double b) {
    return a + b;
}
