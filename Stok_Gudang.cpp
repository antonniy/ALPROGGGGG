/*
Nama Program : Stok Gudang
Nama         : Antonio Reinhart Saian
NPM          : 140810250094
Tanggal Buat : 5 September 2025
*/

#include <iostream>
using namespace std;

int main(){
    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};
    int sisa[10] = {0,0,0,0,0,0,0,0,0,0};
    int total;
        for (int x=0; x<10; x++){
        sisa[x] = beli[x] - jual[x];
        if (x == 9){
            total = sisa [x] + sisa [x-1] + sisa [x-2] + sisa [x-3] + sisa [x-4] + sisa [x-5] + sisa [x-6] + sisa [x-7] + sisa [x-8] + sisa [x-9];
            }      
        }
    cout << total << endl;
}