/* Nama: Antonio Reinhart Saian
    NPM : 140810250094
    Nama Program: Total Medali Negara*/

#include <iostream>
using namespace std;

int main(){
string nama[8][4] = {
{"Canada","       3 ","        0","        1"},
{"Italy","        2", "         1", "        0"},
{"Germany","      0 ","        5 ", "       0 "},
{"Japan","        6", "         1" ,"        2"},
{"Kazakhstan","   1", "         0", "        0"},
{"Russia","       5","         2", "        2"},
{"South Korea","  2", "         4", "        6"},
{"America","      0", "         2", "        9"},
    };
cout << "Country    " << "Bronze    " << "Silver    " << "Gold" << endl;
for (int n = 0; n < 8  ; n++){
    for (int y = 0; y <= 3; ++y){
     cout << nama [n][y];
     if (y == 3){
        cout << endl;
     }
        }
    }
}