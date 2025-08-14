#pragma once
#include <iostream>
#include <string>
class Schwein
{

private:
    std::string name;
    int gewicht;

    void setGewicht(int neuesGewicht) {
        if (neuesGewicht < 10) return;
        gewicht = neuesGewicht;

    }
public:

    Schwein(std::string neuerName="Nobody") {
        name = neuerName;
        gewicht = 10;
    }
    ~Schwein() {
        std::cout << "Quiiiiiekk!" << std::endl;
    }

    int getGewicht() {
        return gewicht;
    }

    void setName(std::string neuerName) {
        if (name == "Elsa") return;
        name = neuerName;
    }

    std::string getName() {
        return name;
    }

    void fuettern() {
        gewicht++;
    }
};



