#include <iostream>
using namespace std;

int prime(long long N){
    if(N < 2){
        cout << "Not Prime";
        return 0;
    }
    if(N == 2){
        cout << "Prime";
        return 0;
    }
    for(int i = 2; (long long)i * i <= N; i++){
        if(N % i == 0){
            cout << "Not Prime";
            return 0;   
        }
    }
    cout << "Prime";   

    return 0;
}

int main(){
    long long N;
    cin >> N;
    prime(N);
}