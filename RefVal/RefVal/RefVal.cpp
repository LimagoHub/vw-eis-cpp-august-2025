#include <iostream>

void unter(int &a) {
    a = 100;
}

void ober() {
    int x = 10;
    unter(1000);
    std::cout << x;
}

int main()
{
    ober();
}
