#include <iostream>
using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;
    int Evencount=0;
    int Oddcount=0;
    int poscount=0;
    int negcount=0;
    for (int i =0; i< N;i++) {
        int x;  //kyuki ye out of scope ja rha tha andr init krdiyaaa..
        cin >>x;
        if (x % 2 ==0) {
            Evencount++;
        } else{
            Oddcount++;
        }
        if (x> 0) {
            poscount++;
        } else if (x < 0) {
            negcount++;
        }
    }
    cout<<poscount<< endl;
    cout<<negcount<< endl;
    cout<<Evencount<< endl;
    cout<<Oddcount<< endl;
    return 0;
} 