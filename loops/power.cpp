#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int res =1;
    for(int i=0;i<n;i++){
        res*=x;
    }
    cout<<res;
   
}