#include <iostream>

using namespace std;

int perhitungan(int x, int y, int z){
    return x * y * z;
}

string bilganjil(int bilangan){
    if (bilangan % 2 == 1){
        cout << "ganjil" << endl;
    }
    return "ganjil";
}

void datadiri(){
    cout << "SAYA ALVINO RADYO DANISWORO" << endl;
    cout << "NIM SAYA A11.2022.14600" << endl;
    cout << "SAYA LAHIR DI SUKOHARJO, 16 APRIL 2004" << endl;
    cout << "SAYA TINGGAL DI SURAKARTA" << endl;
}

int main()
{
    int a;
    cout << "tahun sekarang = ";
    cin >> a;
    int b;
    cout << "tahun lahir = ";
    cin >> b;
    int c;
    c = a - b;
    cout << c << " adalah umur anda tahun ini, sehingga tahun ini";
    if (c%2 == 0){
        cout << " umur anda genap";
    }
    else {
        cout << " umur anda ganjil\n";
    }
    int x,y,z;
    cin >> x >> y >> z;
    cout << perhitungan(x,y,z) << endl;

    datadiri();

    cout << bilganjil(4) << endl;
    return 0;
}
