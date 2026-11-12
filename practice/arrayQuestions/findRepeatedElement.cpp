#include <iostream>
#include <algorithm>
using namespace std;
int findRepeatedElement(int arr[],int n){
    int s=0;
    int e=n-1;
    sort(arr,arr+n);
    while(s<e){
        if(arr[s]==arr[s+1]){
            return arr[s];

        }
        else{
            s++;
        }

    }
    return arr[s];
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findRepeatedElement(arr, n) << endl;
    return 0;
}