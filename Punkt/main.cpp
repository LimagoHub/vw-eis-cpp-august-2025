#include <iostream>
#include "Punkt.h"
#include "Kreis.h"
int main() {
    Kreis k;
    std::cout << k << std::endl;

    for (int i = 0; i < 11; ++i) {
        k.rechts(1.5);
        std::cout << k << std::endl;
    }

    return 0;
}
