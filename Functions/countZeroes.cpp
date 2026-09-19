#include <iostream>
using namespace std;

int countZeroes(long long N){
    N = abs(N);          
    if(N == 0) return 1;

    int count = 0;
    while(N > 0){
        int ld = N % 10;
        if(ld == 0){
            count++;
        }
        N /= 10;
    }
    return count;
}

int main(){
    long long N;
    cin >> N;
    cout << countZeroes(N);
}