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
int binarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2; //chalakiiiii waowow

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right part
        else if(arr[mid]<key){
            start=mid+1;
        }
        //go to left part
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2; //updating mid after very iteration
    }
    return -1;
}

int searchSRA(int arr[], int size, int target){
    int p=pivot(arr,size);
    if(target>=arr[p] && target<=arr[size-1]){ //search on line 2
        return binarySearch(arr,p,size-1,target);
    }
    else{
        return binarySearch(arr,0,p-1,target); //search on line 1
    }
}


int main(){
    int arr[]={8,10,17,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"index for 17 is:"<<searchSRA(arr,size,17)<<endl;

}