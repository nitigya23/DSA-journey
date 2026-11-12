#include <iostream>
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

    return 0;
}