#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long reversed = 0;
    while (N != 0) {
        int lastDigit = N % 10;
        reversed = reversed * 10 + lastDigit;
        N /= 10;
    }

    cout << reversed;
    return 0;
}