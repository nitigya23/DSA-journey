#include <iostream>
using namespace std;

int main(){

    //comparing two char arrays using strcmp() function
    char s1[20];
    cout<<"Enter your name:"<<endl;
    cin>>s1;
    cout<<"Your name is: "<<s1<<endl;

    char s2[20];
    cout<<"enter second name:"<<endl;
    cin>>s2;
    cout<<"s2 is: "<<s2<<endl;

    cout<<"Comparison result: "<<strcmp(s1,s2)<<endl;


    //calculating length of char array using strlen() function
    cout<<"Length of s1 is: "<<strlen(s1)<<endl;

    //copying one char array to another using strcpy() function
    char s3[20];
    strcpy(s3,s1);
    cout<<"s3 is: "<<s3<<endl;
}