
#include <iostream>

int main()
{
   


    int zufallszahl= 623;
    int versuch;
    do
    {
        std::cout << "Bitte Zahl zwischen 1 und 1000 eingeben: ";
        std::cin >> versuch;
        if (versuch < zufallszahl) 
            std::cout << "Ihr Versuch ist zu klein!\n";
        if (versuch > zufallszahl)
            std::cout << "Ihr Versuch ist zu gross!\n";

    } while (versuch != zufallszahl);

    std::cout << "Sie haben die Zahl geraten\n";


}
