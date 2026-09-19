#include <iostream>
using namespace std;
long long factorial(int n) {
    long long ans = 1;
    for (int i = 2; i <= n; i++) {
        ans *= i;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Factorial is undefined for non-positive numbers." << endl;
        return 1;
    }

    cout << "Factorial is:" << factorial(n) << endl;
    return 0;
}