#include <iostream>
using namespace std;

int reverseArray(long long N){
    long long arr[N];
    for(long long i=1;i<=N;i++){
        cin>>arr[i];
    }
    for(long long i=N;i>=1;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    long long N;
    cin>>N;
    reverseArray(N);
    

}