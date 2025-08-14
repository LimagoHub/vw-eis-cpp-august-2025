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
        int zug;
        while(true) {
            std::cout << "Es gibt " << steine << " Steine. Bitte nehmen Sie 1, 2 oder 3!\n";
            std::cin >> zug;
            if(zug >=1 && zug <=3) break;
            std::cout << "Ungueltiger Zug\n";
        }
        steine -= zug;
    }
    void computerzug() {
        // Hat Spieler verloren -> steine < 1 dann return (spielende = true)
        // hat computer verloren -> Steine == 1 dann return (spielende = true)
        // Regel gemaess Flipchart
    }
};
