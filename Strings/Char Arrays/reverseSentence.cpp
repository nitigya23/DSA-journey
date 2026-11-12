# include <iostream>
#include <string>
using namespace std;

string revstrwords(string str){
    string word="";
    string ans="";

    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word+=str[i];
        }
        else{
            if(word!=""){
                ans=word+" "+ans;
                word="";

            }
        }
    }
    if(word !=""){
        ans=word +" "+ans;
    }
    if(ans!=""){
        ans.pop_back();
    }
    return ans;
}
int main(){
    string str;
    cout<<"Enter a sentence:"<<endl;
    getline(cin,str);   
    cout<<"Reversed sentence: "<<revstrwords(str)<<endl;
}