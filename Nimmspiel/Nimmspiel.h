//
// Created by JoachimWagner on 13.08.2025.
//

#pragma once
#include <iostream>

class Nimmspiel {
    int steine;
    bool spielende;

public:
    Nimmspiel() {
        steine = 23;
        spielende = false;
    }
    void play(){
        while( ! spielende) {
            spielerzug();
            computerzug();
        }
    }
private:
    void spielerzug() {
        // Eingabe
        // wert lesen
        // Eingabe abziehen
    }
    void computerzug() {
        std::cout << "Computerzug" << std::endl;
    }
};
