#include <iostream>
#include <cmath>
using namespace std;


int sqRoot(int N){
    if(N<0){
        return -1;
    }
    int i=0;
    while(i*i <=N){
        i++;
    }
    return i-1;
   

}
int main(){
    cout<<sqRoot(27)<<endl;

}