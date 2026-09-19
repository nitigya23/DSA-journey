#include <iostream>
using namespace std;
int fact(int n) {
    int ans = 1;
    for (int i =1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}
int main() {
    int n,r;
    cin >> n>>r;

    int n_fact=fact(n);
    int r_fact=fact(r);
    int n_r_fact=fact(n-r);
    cout<<(n_fact)/(r_fact * n_r_fact);
    return 0;
}