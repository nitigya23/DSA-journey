#include <iostream>
using namespace std;

int SumArr(long long N){
    long long sum=0;

    long long arr[N];
    for(long long i=1;i<=N;i++){
        cin>>arr[i];
    }
    for(long long i=1;i<=N;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}

int main(){
    long long N;
    cin>>N;
    SumArr(N);
}