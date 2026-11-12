
#include <bits/stdc++.h>
using namespace std;

void revIndexArr(vector<int> &arr,int m){
    
    int s=m+1,e=arr.size()-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main() {
    vector<int> arr={1,2,3,4,5,6};

    int m = 3;

    revIndexArr(arr, m);
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
