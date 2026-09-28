#include <iostream> 
using namespace std;

int MinElement(int arr[], int size){
    int min = INT_MAX;
    // for(int i = 0; i < size; i++){
    //     if(arr[i] < min)
    //         min = arr[i];
    // }
    return min;
}

int main(){
    int size;
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << MinElement(arr, size) << endl;
    return 0;
}