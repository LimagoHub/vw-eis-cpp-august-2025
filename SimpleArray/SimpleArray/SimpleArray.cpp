#include <iostream>

int main()
{
    int summe=0;

    int feld[] = { 10,20,30,40 };

   
	for (size_t i = 0; i < sizeof(feld)/sizeof(int); i++)
	{
		summe += feld[i];
	}
	std::cout << summe;
   
}
