//
// Created by JoachimWagner on 12.08.2025.
//

#pragma once


#include <ostream>

class Punkt {
private:
    double x;
    double y;
    const double max{10.0};

    void setX(double x) {

        if(x>max) x = max;
        if(x < -max) x = -max;
        Punkt::x = x;
    }

    void setY(double y) {
        if(y>max) y = max;
        if(y < -max) y = -max;
        Punkt::y = y;
    }

public:
    Punkt(double startX=0, double startY=0) {
        setX(startX);
        setY(startY);

    }



    /*void rechts() {
        setX(getX() + 1);
    }*/
    void rechts(double schrittweite = 1) {
        setX(getX() + schrittweite);
    }
    void links() {
        setX(getX() - 1);
    }
    void oben() {
        setY(getY() + 1);
    }
    void unten() {
        setY(getY() - 1);
    }


    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    friend std::ostream &operator<<(std::ostream &os, const Punkt &punkt) {
        os << "x: " << punkt.x << " y: " << punkt.y;
        return os;
    }
};
