#include <iostream>
#include <algorithm>
using namespace std;
//my solution
int duplicateNum(int arr[], int size){
    sort(arr, arr + size);
    for(int i = 0; i < size - 1; i++){
        if(arr[i] == arr[i + 1]){
            return arr[i];
        }
    }
    return -1;
       
}

int main(){
    int arr[] = {2, 5, 6, 76, 44, 3, 6, 8, 0, 67};
    int size=sizeof(arr);
    cout << "Duplicate number: " << duplicateNum(arr, size) << endl;
    return 0;
}