#include <iostream>
using namespace std;
long long sum(long long a, long long b){
    return a + b;
}
int main(){
    long long a,b;
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum(a,b)<<endl;
    
    int ans1=sum(2,3);
    int ans2=sum(100,200);

    cout<<ans1<<ans2<<endl;
    return 0;

}