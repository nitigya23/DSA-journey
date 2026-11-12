#include <iostream>
using namespace std;
//two pointer approach

bool palindrome(string str){
    int s=0;
    int e=str.length()-1;

    while(s<e && !(isalnum(str[s]))){
        s++;
    }
    while(s<e && !(isalnum(str[e]))){
        e--;
    }
    if(tolower(str[s])!= tolower(str[e])){
        return false;
    }
    return true;
}


int main(){
    string str;
    cout<<"enter a string:"<<endl;
    getline(cin,str);
    if(palindrome(str)){
        cout<<"The string is palindrome"<<endl;
    }
    else{
        cout<<"The string is not palindrome"<<endl;
    }
}




//brute force approach

// #include <iostream>
// using namespace std;

// string revStr(char str[], int n){
//     string temp="";

//     for(int i=n-1;i>=0;i--){
//         temp+=str[i];
//     }

//     return temp;
// }

// int length(char str[]){
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         count++;

//     }
//     return count;
// }
// bool palindromecheck(char str[],int n){
//     string rev=revStr(str,n);
//     for(int i=0;rev[i]!='\0';i++){
//         if(rev[i] != str[i]){
//             return false;
//         }
//     }
//     return true;
// }


// int main(){
//     char str[20];
//     cout<<" Enter a string:"<<endl;
//     cin.getline(str,20);


//     int n=length(str);
//     if (palindromecheck(str,n) ){
//         cout<<"The string is palindrome"<<endl;
//     }
//     else{
//         cout<<"The string is not palindrome"<<endl;
//     }
    

// }

