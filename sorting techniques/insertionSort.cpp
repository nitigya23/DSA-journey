#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(int arr[],int n){
    for(int i=1;i<n;i++){  //since we consider 1st element as sorted in Insertion Sort
        // and comapre next element with the first one always!
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;

    }
    return vector<int> (arr,arr+n);
}


int main(){
    int arr[]={10,1,2,4,8,11,7};
    int size= sizeof(arr)/sizeof(arr[0]);
    vector <int> sortedarr=selectionSort(arr,size);;
    for(int x:sortedarr){
        cout<<x<<", ";
    }
    return 0;
}