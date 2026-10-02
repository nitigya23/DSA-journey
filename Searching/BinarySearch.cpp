#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=(size-1);
    int mid=(start)/2+(end)/2; //chalakiiiii waowow

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
        mid=(start)/2+(end)/2; //updating mid after very iteration
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={1,3,5,7,9};

    cout<<"Index of 12 is: "<<binarySearch(even,6,12)<<endl;
    cout<<"Index of 7 is: "<<binarySearch(odd,5,7)<<endl;
    return 0;

}