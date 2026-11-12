#include <iostream>
using namespace std;
// optimized o(1) space complexity
// void reverseStr(char str[],int n){

//     int s=0;
//     int e=n-1;
//     while(s<e){
//         swap(str[s],str[e]);
//         s++;
//         e--;
//     } 
// }

// int length(char str[]){
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         count++;

//     }
//     return count;
// }
// int main(){
//     char str[100];
//     cout<<"Enter a string:"<<endl;
//     cin>>str;

//     int n=length(str);
//     cout<<"reversed name is:"<<endl;
//     reverseStr(str,n);
//     cout<<str<<endl;

// }


//brute force -O(n) space complexity
string revStr(char str[], int n){
    string temp="";

    for(int i=n-1;i>=0;i--){
        temp+=str[i];
    }

    return temp;
}

int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;

    }
    return count;
}


int main(){
    char str[20];
    cout<<" Enter a string:"<<endl;
    cin.getline(str,20);

    int n=length(str);
    cout<<"reversed name is:"<<endl;

    cout<<revStr(str,n)<<endl;

}