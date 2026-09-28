#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i = 0; i + 1 < size; i += 2){
        swap(arr[i], arr[i + 1]);
    }
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int brr[] = {6,56,78,34,22};

    swapAlternate(arr, 6);
    swapAlternate(brr, 5);

    printArr(arr, 6);
    printArr(brr, 5);
    return 0;
}