// Selection Sort

#include <iostream>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int arr[], int n){
    for (int i=0;i<n;i++){
        int Minim=i;
        for (int j=0;j<n;j++){
            if(arr[j]>arr[Minim]){
                Minim = j;
            }
            swap (arr[Minim],arr[i]);
        }
    }
}
void Display(int arr[], int n){
    for (int i=0;i<n;i++){
        cout << arr[i];
    }
}
int main(){
    int n;
    cin >> n;
    int anjing[n];
    for (int i=0;i<n;i++){
        cin >> anjing[i];
    }
    SelectionSort(anjing,n);

    Display(anjing,n);
}