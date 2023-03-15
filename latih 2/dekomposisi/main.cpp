#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char pertama[30];{
    strcpy(pertama, "Alvino Radyo Danisworo");
    cout << "nama : " << pertama << endl;
    cout << "banyaknya karakter = " << strlen(pertama) << endl;
    cout << strupr(pertama) << endl;
    cout << strlwr(pertama) << endl;
    }
    return 0;
}
