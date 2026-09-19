#include <iostream>
using namespace std;

int factors1(long long N){
    for(int i=1;i<=N;i++){
        if(N%i==0)
            cout<<i<<" ";
    }
    return 0;

}
int main(){
    long long N;
    cin>>N;

    factors1(N);

}