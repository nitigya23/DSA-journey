#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> SelectionSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    int min_index = i;

    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[min_index])
            min_index = j;
    }
    swap(arr[min_index],arr[i]);
}
return vector<int> (arr,arr+n);

}
int main(){
    int arr[]={64,25,12,22,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> SortedArr= SelectionSort(arr,size);
    for(int x:SortedArr){
        cout<<x<<" ,";
    }
    cout<<endl;
    return 0;
}