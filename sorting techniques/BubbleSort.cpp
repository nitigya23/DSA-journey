#include <iostream>
#include <vector>
using namespace std;
vector<int> bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){  //for 0 to n-1 indices

        for(int j=0;j<n-i;j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return vector<int> (arr,arr+n);

}
int main(){
    int arr[]={10,1,7,6,14,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> sortedArr=bubbleSort(arr,size);
    for(int x:sortedArr){
        cout<<x<<" ,";
    }
   
    return 0;
}