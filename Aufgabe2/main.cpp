#include <iostream>
#include <string>
struct Messwert {
    std::string ort;
    double temp;
    double druck;
    double luftfeuchte;
    Messwert() {
        ort = "Unbekannt";
        temp = 0;
        druck = 0;
        luftfeuchte = 0;
    }

    Messwert(const std::string &ort, double temp, double druck, double luftfeuchte) : ort(ort), temp(temp),
                                                                                      druck(druck),
                                                                                      luftfeuchte(luftfeuchte) {}


    void print() {
        std::cout << "Ort: " << ort << ", Druck: " << druck
            << ", Luftfeuchte: " << luftfeuchte << std::endl;
    }
};

class Messwerte {
private:
    Messwert werte[3] = {
            {"Berlin", 20.5, 1013.2, 60.0},
            {"Hamburg", 18.2, 1012.8, 65.0},
            {"München", 22.1, 1015.0, 55.0}
    };
public:
    Messwerte() {

    }
    void ausgabe() {
        for (int i = 0; i < 3; ++i) {
            werte[i].print();
        }
    }
    void setTemp(int index, double neueTemp) {
        werte[index].temp = neueTemp;
    }
};

int main() {
    Messwerte meineMesswerte;
    meineMesswerte.ausgabe();
    return 0;
}
