#include <iostream>
using namespace std;

void printSquare(int n,char ch){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}
int main(){
    printSquare(5,'#');

}