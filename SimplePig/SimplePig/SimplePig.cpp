#include <iostream>
#include <string>
#include "Schwein.h"
int x=10;

int main()
{
    

   Schwein piggy;
    Schwein babe;

    piggy.setName("Miss Piggy");
    

    std::cout << 
        "Dieses Schwein heisst " 
        << piggy.getName()
        << " und wiegt " 
        << piggy.getGewicht();
        
}

