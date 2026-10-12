#include <iostream>
using namespace std;

int pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        //pivot is on line 1
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{ //pivot is on line 2
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[s];

}
int main(){
    int rot_arr[]={7,9,1,2,3};
    int size=sizeof(rot_arr)/sizeof(rot_arr[0]);

    cout<<"pivot element in the given array is:"<<pivot(rot_arr,size)<<"\n";
    return 0;

} 