#include <iostream>
using namespace std;
int countFactors(int N){
    int count=0;
    for(int i =1;i<=N;i++){
        if(N%i==0)
            count++;
    }
    return count;

}
int main(){
    int N;
    cin>>N;
    if(countFactors(N)==2)
        cout<<"prime number";
    else
        cout<<"not a prime number";
   

}