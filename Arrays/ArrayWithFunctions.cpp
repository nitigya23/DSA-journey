#include <iostream>
using namespace std;

void printArray(int size,int arr[]){ //fucntion declaration!
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[]={2,3,4,5,67,7,8,5,6,7,5};
    printArray(n,arr); //function call
    return 0;

}