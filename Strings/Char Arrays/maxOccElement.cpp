#include <iostream>
using namespace std;
char getMaxOccChar(string str){
    int arr[26]={0};

    for(int i=0;i<str.length();i++){
        char ch=str[i];

        int number=0;
        if(ch>='a' && ch<='z'){ //lowercase character
            number=ch-'a';
            arr[number]++;
        }
        else if(ch>='A' && ch<='Z'){ //uppercase character
            number=ch-'A';
            arr[number]++;
        } 
    }
    
    int maxi=-1,ans=0;

    for(int i=0;i<26;i++){
        if(maxi <arr[i]){
            ans=i;
            maxi=arr[i];

        }
    }
    char finalAns='a'+ans;
    return finalAns;
}
int main(){
    
    string str="nitigya talwar";
    cout<<"maximum occuring element in "<<str<<" is: "<<getMaxOccChar(str)<<endl;
    return 0;

}