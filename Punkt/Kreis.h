//
// Created by JoachimWagner on 14.08.2025.
//

#pragma once
#include "Punkt.h"

class Kreis : public Punkt{

private :
    double radius;
public:

    Kreis() {
        radius = 0;
    }

    Kreis(double x, double y):Punkt(x,y) {
        radius = 0;
    }

    double getRadius() const {
        return radius;
    }

    void setRadius(double radius) {
        Kreis::radius = radius;
    }

     void print() override{
        Punkt::print();
        std::cout << "Radius: " << radius << std::endl;
    }
};
