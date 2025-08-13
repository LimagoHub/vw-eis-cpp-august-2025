#include <iostream>
#include "Stapel.h"
int main() {


    int a = 1;
    int b = 1;

    int c = a+++b;

    std::cout << a << " " << b << " " << c << std::endl;

    Stapel myStapel;

    for (int i =0; i < 10 ; i++){
        if( ! myStapel.isFull()){
            myStapel.push(i * 10);
        }
    }

    while( ! myStapel.isEmpty()) {
        std::cout << myStapel.pop() << std::endl;
    }

    return 0;
}
