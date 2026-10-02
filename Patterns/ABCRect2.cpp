#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char ch='A';    
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ch;
        }        
        cout<<endl;
        ch++;

    }
    return 0;
    
}