#include <iostream>
using namespace std;

int main(){
    long long x;
    int n;
    cin >>x>>n;
    long long result = 1;
    for(int i= 0;i<n;i++){
        result*=x;
    }
    cout<<result<<endl;
    return 0;
}


// //method-2 
// #include <iostream>
// #include <cmath>
// using namespace std;   
// int main(){
//     long long x;
//     int n;
//     cin >>x>>n;
//     long long result = pow(x,n);
//     cout<<result<<endl;
//     return 0;

// }