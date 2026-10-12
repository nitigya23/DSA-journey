#include <iostream>
#include <iterator>
using namespace std;

int pivot(int arr[], int size){
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
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[],int s, int e,int key){
   
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        
        }
        else if(arr[mid]<key){
            s=mid+1;
        }   
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){

    int arr[]={8,10,17,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=17;

    if(key>=pivot(arr,size) and key<arr[size-1]){
        int result= binarySearch(arr,pivot(arr,size),size-1,key);
        cout<<"index for "<<key<<" is:"<<result<<"\n";
    }
    else{
        int result=binarySearch(arr,0,pivot(arr,size)-1,key);
        cout<<"index for "<<key<<" is:"<<result<<"\n";
    }
    return 0;

}