#include <iostream>
using namespace std;
int main(){
    //declare
    int num[5];

    //accessing elements of an array
    cout<<"value at 1st index is:"<<num[1]<<endl;
    cout<<"value at 4th index is:"<<num[4]<<endl;

    cout<<"value at 20th index is:"<<num[20]<<endl; //index out of bound error!

    //initializing an array
    int arr[5]={2,3,4,5,2};
    cout<<"value at 4th index is:"<<arr[4]<<endl;
    return 0;
}