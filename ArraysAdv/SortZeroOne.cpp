#include <iostream>
#include <vector>
using namespace std;
void sortOne(int arr[],int size){
 
    int i=0;
    int j=size-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }

}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,1,0,0,1,0,1,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    sortOne(arr,size);
    printArray(arr,size);
}