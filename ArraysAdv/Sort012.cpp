#include <iostream>
#include <vector>
using namespace std;
void sortZeroOneTwo(int arr[],int size){
     int low = 0, mid = 0, high = size - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{ // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
}
int main(){
    int arr[]={0,1,2,0,1,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    sortZeroOneTwo(arr,size);
    for(int i=0;i<size;i++){            
        
        cout<<arr[i]<<" ";
    }   
    
return 0;
}