#include <iostream>

int main()
{
    unsigned int faktor1;
    unsigned int faktor2;
    unsigned long long int result=0;
    
    std::cout << "Bitte geben Sie den Wert fuer den ersten Faktor ein: ";
    std::cin >> faktor1;


    std::cout << "Bitte geben Sie den Wert fuer den zweiten Faktor ein: ";
    std::cin >> faktor2;

    for (int i = 0; i < faktor2; i++) {
        result += faktor1;
    }

    std::cout << "Ergebnis = " << result << std::endl;
}
