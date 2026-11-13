// #include <iostream>
// using namespace std;

// string replaceSpaces(string &s){
//     string res="";
//     for(int i=0; i<s.length(); i++){
//         if(s[i]==' '){
//            res.push_back('@');
//            res.push_back('4');
//            res.push_back('0');

//         }
//         else{
            
//            res.push_back(s[i]);
            
//         }
//     }
//     return res;
// } 

// int main(){
//     string s="nitigya talwar is a good girl";
//     cout << replaceSpaces(s) << endl;
//     return 0;
// }


//optimal approach
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string replaceSpacesO(string &str){
    int i=str.length()-1;
    int spaces =count(str.begin(),str.end(),' ');
    str.resize(str.length()+spaces*2);

    int j=str.length()-1;


    while(i>=0){
        if(str[i]==' '){
            str[j--]='0';
            str[j--]='4';
            str[j--]='@';

        }
        else{
            str[j--]=str[i];
        }
        i--;
    }
    return str;

}

int main(){

    string s="nitigya  talwar";
    cout<<"modified string is:"<<replaceSpacesO(s);



}

