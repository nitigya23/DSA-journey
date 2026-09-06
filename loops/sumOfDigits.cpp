#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long sum = 0;
    while (N != 0) {
        int lastDigit = N % 10;
        sum += lastDigit;
        N /= 10;
    }

    cout << sum;
    return 0;
}