#include <iostream>
using namespace std;

int MinElement(int arr[],int n){
    int max=INT_MIN; //maximum value

    for(int i=0;i<=n;i++){
        if(arr[i]>max)
            max= arr[i];  

    }
    return max;
}

int main(){
    int size;
    cin>>size;

    //inputting numbers in array
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }

    cout<<MinElement(arr,size);


    return 0;
    
}