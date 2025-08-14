#include <iostream>

struct Demo {
    double x;
    double feld[1000];
};

void xyz(const Demo &d) {

}

int main() {

    Demo demo;
    xyz(demo);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
