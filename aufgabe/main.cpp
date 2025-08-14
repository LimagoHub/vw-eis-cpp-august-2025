#include <iostream>
#include <string>
struct Azubi {
    std::string vorname;
    std::string nachname;
    unsigned char alter;
    std::string programmiersprachen[10];

    Azubi() {
        alter = 18;
    }
};

class EisKlasse {
private:
    Azubi azubis[12];
public:
    EisKlasse() {
        for(int i=0; i < 12 ; i++){
            azubis[i].alter = 18;
        }
    }

    void foo(void){

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
