#include <iostream>
using namespace std;
int countFactors(int N){
    int count=0;
    for(int i =1;i<=N;i++){
        if(N%i==0)
            count++;
    }
    cout<<"number of factors are:"<<count<<endl;
    return 0;

}
int main(){
    int N;
    cin>>N;
    countFactors(N);
}