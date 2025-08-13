#include <iostream>
#include "Punkt.h"
int main() {
    Punkt p(1000,4);
    std::cout << p << std::endl;

    for (int i = 0; i < 11; ++i) {
        p.rechts(1.5);
        std::cout << p << std::endl;
    }

    return 0;
}
