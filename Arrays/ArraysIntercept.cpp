#include <iostream>
using namespace std;


void intercept(int arr[],int sizeA,int brr[],int sizeB){
    for(int i=0;i<sizeA;i++){
        for(int j=0;j<sizeB;j++){
            if(arr[i]==brr[j])
                cout<<arr[i]<<endl;
        }
    }
}
int main(){
    int arr[]={2,5,6,7,8,9};
    int brr[]={6,5,4,3,21,2};

    intercept(arr,6,brr,6);
    return 0;
}