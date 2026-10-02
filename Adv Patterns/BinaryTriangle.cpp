#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==j || (i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)){ 
                // logic ya to i aur j dono even honge ya dono odd honge ya i aur j equal honge to 0 print hoga otherwise 1 print hoga  
                cout<<0;
            }
            else{
                cout<<1;
            }
        }
       cout<<endl;
    }
}