#include <iostream>
using namespace std;
bool isPalindrome(int x) {
        int og= x;
        int rev=0;
        while(x!=0){
            if(x<0) return false;
            int lastdig= x%10; 
            rev=rev*10+lastdig; 
            x=x/10;      
        }

        if(og==rev){
            return true;
        }
        else{
            return false;
        }

           
}
int main(){
    int x=121;
    cout<< isPalindrome(x);    
}