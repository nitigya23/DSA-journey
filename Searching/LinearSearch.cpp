#include <iostream>
using namespace std;

void linearSearch(int arr[], int key,int size){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            cout<<"Element found at location:"<<i<<endl;
            return;
        }
    }
    cout<<"element not found"<<endl;
   
}
int main(){
    int key;
    cout<<"Enter the number you want to find in the array: ";
    cin>>key;

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;


    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    linearSearch(arr,key,size);

    return 0;
}