/*
Nama Program :Teka-Teki Lampu
Nama         :Antonio Reinhart Saian
NPM          :140810250094
Tanggal Buat :4 September 2025
*/

#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    bool lampu[N+1] = {false}; 
    for (int putaran = 1; putaran <= 10; putaran++) {
        for (int i = putaran; i <= N; i += putaran) {
            lampu[i] = !lampu[i];
        }
    }
    int nyala = 0;
    for (int i = 1; i <= N; i++) {
        if (lampu[i]) nyala++;
    }

    cout << "Total Lampu yang menyala: " << nyala << endl;
    return 0;
}