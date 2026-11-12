#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArr(vector<int> &v){

    int s=0;
    int e=v.size()-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
vector<int> findArraySum(vector<int> &a,int n,vector<int> &b,int m){

    int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int> ans;

    while(i>=0 && j>=0){
        int sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;

    }

    //first case
    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum);
        i--;
    }

    //second case
    while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum);

        j--;

    }

    //third case- leftover carry after adding up of equal or unequal arrays
    while(carry!=0){
       
        carry=carry/10;
        ans.push_back(carry);
        

    }
    return reverseArr(ans);
    
}


int main(){
    vector<int> a={9,9,9};
    int size_a=a.size();
    vector<int> b={9,9,9};
    int size_b=b.size();
    vector<int> res=findArraySum(a,size_a,b,size_b);

    for(int i:res){
        cout<<i<<" ";

    }cout<<endl;

    return 0;

}