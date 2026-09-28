#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int arr[7]={2,3,4,5 ,9,89,12};
    int brr[5]={2,3,4,5,6};
    reverseArray(arr,7);
    reverseArray(brr,5);
    
    printArray(arr,7);
    printArray(brr,5);
    return 0;

}