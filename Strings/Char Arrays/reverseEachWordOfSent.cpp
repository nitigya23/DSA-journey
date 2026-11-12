#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string revstr(string str){
    string word="";
    string result="";
    int n=str.length();
    int e=n-1;

    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            word+=str[i];
        }
        else{
            if(word!=""){
                reverse(word.begin(),word.end());
                result=result +" "+word;
                word="";
            }
        }
    }
    if(word!=""){
        reverse(word.begin(),word.end());
        result=result+" "+word;
    }

   

    return result;
}

int main(){
    string str="nitigya talwar";
    cout<<str<<endl;
    string res=revstr(str);
    cout<<"Reversed string is: "<<res<<endl;
    return 0;

}