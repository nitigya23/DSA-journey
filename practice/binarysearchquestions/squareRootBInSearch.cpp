#include <iostream>
#include <iomanip>
using namespace std;

int SquareRootBS(int N){
    if(N<0){
        return -1;
    }

    int ans=-1;
    int s=0;
    int e=N;

    while(s<=e){
        int mid=s+(e-s)/2;
        long long sq=(long long)mid*mid;  
        if(sq>N){
            e=mid-1;
        }
        else if(sq<N){
            ans=mid;
            s=mid+1;
        }
        else{
            return mid;
        }
    }
    return ans;
}

double morePrecision(int n,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;

    for(int i=0;i<precision;i++){
        factor/=10;
        // keep stepping while the next step still doesn't exceed n
        while((ans+factor)*(ans+factor)<=n){
            ans+=factor;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int tempsol=SquareRootBS(n);
    cout<<"precised answer is: "<<fixed<<setprecision(3)<<morePrecision(n,3,tempsol)<<endl;
    return 0;
}