#include <iostream>
using namespace std;
bool possibleSol(int arr[],int n,int k,int mid){
    int painterCount=1;
    int boards=0;

    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(boards+arr[i]<=mid){
            boards+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount > k)
                return false;
            
            else
                boards=arr[i];
            
        }
    }
    return true;
}


int painterPartition(int arr[],int n,int k){

    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(possibleSol(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int arr[]={2,1,5,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<"Minimum time required by "<<k<<" painters is:"<<painterPartition(arr,n,k)<<endl;
    return 0;


}7 