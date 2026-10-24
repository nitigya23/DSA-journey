 #include <iostream>
 using namespace std;

 bool possible(int arr[],int n,long long M,int H){
    long long total=0;
    for(int i=0;i<n;i++){
        if(arr[i] > H){
            total += arr[i] - H;
}
    }
    return  total>=M;
 }

 int maxHeight(int arr[],int n,long long M){\
    int s=0;
    int e=0;
    for(int i=0;i<n;i++){
        e=max(e,arr[i]);
    }

    int ans=0;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(possible(arr,n,M,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return ans;

 }
int main() {
    int n;
    long long M;

    cout << "Enter number of trees and wood needed: " << endl;
    cin >> n >> M;

    int arr[n];
    cout << "Enter tree heights: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Max height of the blade is: " << maxHeight(arr, n, M) << endl;
    return 0;
}