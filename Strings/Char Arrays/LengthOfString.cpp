#include <iostream>
using namespace std;

int lengthOfStr(char name[]){

    int count=0;
    for(int i=0;name[i] !='\0';i++){
        count++;
    }
    return count;
}
int main(){

    char name[20];
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Length of the string is: "<< lengthOfStr(name)<<endl; 


}