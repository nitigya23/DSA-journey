#include <iostream>
using namespace std;

int firstocc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int ans=-1;

    int mid=s+(e-s)/2;

    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;

        }
    mid=s+(e-s)/2;

    }
    return ans;
}

int lastocc(int arr[],int size,int key){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-2;


    while(s<=e){

        if(arr[mid]== key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main(){
    int arr[]={0,1,1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key=1;

    cout<<"the first occurence of "<<key<<" is at the index : "<<firstocc(arr,size,key)<<endl;
    cout<<"the last occurence of "<<key<<" is at the index : "<<lastocc(arr,size,key)<<endl;

    return 0;


}