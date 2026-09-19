#include <iostream>
using namespace std;
int factors2(long long N){
    for(int i=N;i>=1;i--){
        if(N%i==0)
            cout<<i<<" ";
    }
    return 0;

}
int main(){
    long long N;
    cin>>N;

    factors2(N);


}