#include <iostream>
#include <string>
using namespace std;

string removeAdjDuplicates(string &str){
    string temp = "";
    for(char c : str){
        if(!temp.empty() && temp.back() == c){
            temp.pop_back();   // matches the top, so remove the pair
        }
        else{
            temp += c;         // otherwise keep it
        }
    }
    return temp;
}

int main(){
    string str = "abbaca";
    string res = removeAdjDuplicates(str);
    cout << "After removing duplicates the string becomes: " << res << endl;
    return 0;
}