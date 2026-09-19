#include <iostream>
using namespace std;
void hello(int N){
    for(int i=1;i<=N;i++){
        cout<<"I am learning functions"<<endl;
    }
}
int main(){
    int N;
    cin>>N;

    hello(N);
}