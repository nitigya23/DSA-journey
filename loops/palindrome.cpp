#include <iostream>
using namespace std;
int main(){
    //if OG number is equal to reversed number then it is palindrome
    long long N;
    cin >> N;
    long long original = N;      
    long long reversed = 0;
    while (N != 0) {
        int lastDigit = N % 10;
        reversed = reversed * 10 + lastDigit;
        N /= 10;
    }
    if (original == reversed) {
        cout << "Yes" << endl;
    } else {
        cout << "No";
    }
    return 0;
}