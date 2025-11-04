// Membalik Array dengan Pointer

#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> n;
    int array [n];
    m = n-1 ;
    for (int i=0;i<n;i++){
        cin >> array [i];
    }
    int *pAwal = array;
    int *pAkhir = array + n - 1;

    while (pAwal < pAkhir) {
        int temp = *pAwal;
        *pAwal = *pAkhir;
        *pAkhir = temp;
        pAwal++;
        pAkhir--;
    }
    for (int i=0;i<n;i++){
        cout << array[i] << ' ';
    }

}
