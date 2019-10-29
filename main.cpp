#include <iostream>
#include <stdlib.h>
//
#include <time.h>
using namespace std;

int main()
{
    char ulang = 'y';
    srand(static_cast<unsigned int>(time(0)));
    while (ulang == 'y'){
        int nilai;
        int nyawa = 3;
        int tebakan;
        int cheat;
        bool win = false;
        cout << "Masukkan maksimal nilai (10-100) : ";
        cin >> nilai;
        cout << "Silahkan tebak nilai antara 0 sampai " << nilai << "!!" << endl;
        cheat = rand() % nilai + 0;
        cout << "(Cheat : angka yang tertebak adalah " << cheat << " ) ";
        while(nyawa > 0){
            cout << "\nMasukkan tebakan anda : ";
            cin >> tebakan;
            if(tebakan == cheat){
                cout << "\nTebakan Anda Benar" << endl;
                nyawa = 0;
                win = true;
            }else if(tebakan > cheat){
                cout << "\nTebakan Anda Terlalu Besar" << endl;
                nyawa = nyawa - 1;
                cout << "Tebakan Anda Salah, nyawa : "<< nyawa << endl;
            }else{
                cout << "\nTebakan Anda Terlalu Kecil" << endl;
                nyawa = nyawa - 1;
                cout << "Tebakan Anda Salah, nyawa : "<< nyawa << endl;
            }
        }
        if(win){
            cout << "Anda Menang" << endl;
        }else{
            cout << "Game Over" << endl;
        }
        cout << "Main Lagi (y/n) : ";
        cin >> ulang;
        cout << "" << endl;
    }
    return 0;
}
