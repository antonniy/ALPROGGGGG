/*
Nama Program : 
Nama         : Antonio Reinhart Saian
NPM          : 140810250094
Tanggal Buat : 28 Oktober 2025
Deskripsi    : Barasuara baru saja menyelesaikan tur keliling Indonesia untuk mempromosikan album Jalaran Sadrah nya. Manajer dari Barasuara ingin mengevaluasi kota yang paling sukses. Kesuksesan tur di sebuah kota tidak dihitung dari jumlah penonton, melainkan dari persentase kehadiran (seberapa penuh venue konser).

Manajer ingin membuat program yang dapat mengurutkan kota-kota yang mereka kunjungi berdasarkan persentase kehadiran tertinggi.
Bantulah Manajer untuk membuat program perankingannya!
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Kota{
    string nama;
    int kapasitas;
    int tiketTerjual;
    float persentase; 
};

void swapKota(Kota &a, Kota &b){
    Kota temp = a;
    a = b;
    b = temp;
}

void BubbleSort(Kota arr[],int n){
for (int i=0 ; i < n-1; i++){
        for(int j=0 ; j < (n - 1)- i; j++){
            if (arr[j].persentase<arr[j+1].persentase) {
                swapKota(arr[j], arr[j+1]);
            }
        }
    }    
}

int main(){
    int n;
    cin >> n;
    Kota daftar[100];
for (int i = 0; i < n; i++) {
        cin >> daftar[i].nama >> daftar[i].tiketTerjual >> daftar[i].kapasitas;
        daftar[i].persentase = (float)daftar[i].tiketTerjual / daftar[i].kapasitas * 100;
    }

    BubbleSort(daftar, n);

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << daftar[i].persentase << " " << daftar[i].nama << endl;
    }

    return 0;
}
