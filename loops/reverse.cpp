#include <iostream>
#include <string>
using namespace std;

int main(){
    string N;
    cin >> N;

    int i = N.length() - 1;
    while (i >= 0) {
        cout << N[i];
        i--;
    }

    return 0;
}