#include <iostream>
using namespace std;



int firstoccur(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}


int lastoccur(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}


int totalOccur(int arr[],int size, int key){
    int first=firstoccur(arr,size,key);
    int last=lastoccur(arr,size,key);
    int total =last-first+1;
    return total;
}
 
int main(){
    int arr[]={1,2,3,4,5,5,5,5,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    cout<<"Total occurrence of "<<key<<" is: "<<totalOccur(arr,size,key)<<endl;
}