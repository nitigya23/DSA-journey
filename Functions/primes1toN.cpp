#include <iostream>
using namespace std;

int countFactors(long long N){
    long long count=0;
    for(int i=1;i<=N;i++)
        if(N%i==0)
            count++;
    return count;
}
bool isPrime(long long N){
    if((countFactors(N))==2)
        return true;
    else
        return false;
    
}
void PrimeNo(long long N){
    for(int i=1;i<=N;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }


}
int main(){
    int N;
    cin>>N;
    PrimeNo(N);

}