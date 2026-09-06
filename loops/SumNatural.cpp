#include <iostream>
using namespace std;
int main(){
    long long N;
    cin >> N;
    long long count = 0;
    for (long long i = 0; i <= N; i++){
        count += i;
    }
    cout << count;
}