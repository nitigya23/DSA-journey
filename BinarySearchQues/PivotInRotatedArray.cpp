#include <iostream>
using namespace std;

int pivot(int arr[],int size){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;        
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;;
    }
    return s;
}

int main(){
    int arr[]={8,10,17,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"pivot element in the given array is:"<<pivot(arr,size)<<"\n";

}