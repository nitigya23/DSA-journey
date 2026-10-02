#include <iostream>
using namespace std;

int UniqueNum(int arr[],int size){
    int unq=0;
    for(int i=0;i<size;i++){
       unq=unq^arr[i];
    }
    return unq;

}
int main(){
   
    int arr[]={1,2,5,2,1};

    cout << UniqueNum(arr, 5) << endl;
    return 0;


}