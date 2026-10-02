#include <iostream>
using namespace std;
int firstocc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int lastocc(int arr[], int size, int key){
    int start =0;
    int end=size-1;
    int mid = start + (end - start) / 2;


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
        int mid = start + (end - start) / 2;    }
    return ans;
}

int main(){
    int arr[]={1,2,3,6,3,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    cout<<"First occurrence of "<<key<<" is at index "<<firstocc(arr,size,key)<<endl;
    cout<<"Last occurrence of "<<key<<" is at index "<<lastocc(arr,size,key)<<endl;
    return 0;
}     