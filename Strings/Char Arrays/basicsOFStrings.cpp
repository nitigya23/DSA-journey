#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    char ch[20];
    cout<<"Enter your name:"<<endl;
    cin>>ch;
    cout<<"Your name is: "<<ch<<endl;

    char ch2[20]="a\0bcd";
    cout<<"ch2 is: "<<ch2<<endl;

    ch[2]='\0';
    cout<<"ch is: "<<ch<<endl;


    //fucntionalities of string class-getline() function
   string str;
   cout<<"Enter your name:"<<endl;
   getline(cin,str);
   cout<<"Your name is: "<<str<<endl;

   #include <sstream>


   //using custom delimiter to split string
string s = "apple,banana,cherry";
stringstream ss(s);
string token;

while (getline(ss, token, ',')) {
    cout << token << endl;
}

    return 0;
}