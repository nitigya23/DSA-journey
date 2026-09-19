#include <iostream>
using namespace std;

int HCF(int A,int B){\
    int hcf;
    for(int i=1;i<=A && i<=B;i++){
        if((A%i==0)&& (B%i==0)){
            hcf=i;
        }
    }
    return hcf;

}


int main(){
    int A,B;
    cin>>A>>B;
    cout<<HCF(A,B);
}