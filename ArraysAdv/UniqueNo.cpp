#include <iostream>
using namespace std;

// brute force: O(n^2)
int uniqueNum(int arr[], int size){
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return -1; 
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Unique number: " << uniqueNum(arr, size) << endl;
    return 0;
}