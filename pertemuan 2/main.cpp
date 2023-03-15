#include <iostream>

using namespace std;

float voletase (float r, float a){
    return r * a;
}

void garis(int x){
    for(int a=0; a<x; a=a+1){
        cout << "=";
    }
}

int main()
{
    float a, r;
    cout << "masukkan angka anda = ";
    cin >> r;
    cout << "masukkan angka kedua anda = ";
    cin >> a;

    garis(20);

    cout << endl;

    float jumlah[3] = {voletase(r,a), voletase(5,2), voletase(6,1)};

    for (int i = 0; i < 3; i++){
        cout << "voltasenya adalah = " << jumlah[i] << endl;
    }

    garis(20);

    cout << endl;

    float tambah = 0;
    for (int i = 0; i < 3; i++){
        tambah = tambah + jumlah[i];
    }

    cout << tambah << endl;

    return 0;
}
