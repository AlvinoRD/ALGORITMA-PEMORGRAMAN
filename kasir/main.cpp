#include <iostream>

using namespace std;

int salmon = 60000;
int Katsu = 30000;
int bulgogi = 100000;
int tomyum = 70000;
int jumlah[4];
int hasil[4] = {0,0,0,0};
int total = 0;
int x;
char lanjut;
int y;

void menu(){
    cout << "Menu di Restoran Anti Orang Miskin : \n1. Salmon\n2. Katsu\n3. bulgogi\n4. tomyum" << endl;
}

void garis(){
    for (int i = 0; i <= 40; i++){
        cout << "=";
    }
}

int harga(){
    cout << "nomor berapa yang anda pilih? ";
    cin >> x;
    switch(x) {
    case 1 :
        cout << "harga Salmon adalah = " << salmon << endl;
        cout << "mau pesan berapa? ";
        cin >> jumlah[1];
        hasil[1] += salmon*jumlah[1];
        cout << "TOTAL = Rp " << hasil[1] << endl;
        break;
    case 2 :
        cout << "Harga Katsu adalah = " << Katsu << endl;
        cout << "mau pesan berapa? ";
        cin >> jumlah[2];
        hasil[2] += Katsu*jumlah[2];
        cout << "TOTAL = Rp " << hasil[2] << endl;
        break;
    case 3 :
        cout << "Harga Bulgogi adalah = " << bulgogi << endl;
        cout << "mau pesan berapa? = ";
        cin >> jumlah[3];
        hasil[3] += bulgogi*jumlah[3];
        cout << "TOTAL = Rp " << hasil[3] << endl;
        break;
    case 4 :
        cout << "harga Tomyum adalah = " << tomyum << endl;
        cout << "mau pesan berapa? ";
        cin >> jumlah[4];
        hasil[4] += tomyum*jumlah[4];
        cout << "TOTAL = Rp " << hasil[4] << endl;
        break;
    default :
        cout << "salah, ulangi lagi brou" << endl;
        }
    }

int totalH(){
    total = hasil[1] + hasil[2] + hasil[3] + hasil[4];
    return total;
}

int totalM(){
    y = jumlah[1] + jumlah[2] + jumlah[3] + jumlah[4];
}

int main()
{
    char lanjut;
    garis();
    cout << endl;
    cout << endl;
    menu();
    cout << endl;
    garis();
    cout << endl;
    cout << endl;
    while (lanjut != 'n'){
    harga();
    cout << endl;
    cout << "lanjut ga? (y/n)";
    cout << endl;
    cin >> lanjut;
    cout << endl;
    }
    while (lanjut = 'n'){
    garis();
    cout << endl;
    cout << endl;
    cout << "total Makanan anda adalah = " << totalM() << endl;
    cout << endl;
    garis();
    cout << endl;
    cout << endl;
    cout << "total Harga yang harus anda bayar = " << totalH() << endl;
    break;
    }
    return 0;
}
