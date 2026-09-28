#include <iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    arr[1]=10;
    arr[34]=12;
    arr[14]=12;
    arr[20]=10;
    arr[19]=32;
    arr[74]=112;
    arr[99]=232;

    for(int i=1;i<=size;i++){
        cout<<arr[i]<<", ";
    }

}