#include <iostream>
#include "Stapel.h"
int main() {

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
