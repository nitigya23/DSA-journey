//for loop

#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<", ";
    }
    return 0;

}

//while loop
#include <iostream>
using namespace std;
int main(){
    int i=0;
    int n;
    cout<<"enter n:";
    cin>>n;

    int arr[n]={10,4,5,5,6,7,4,2,3,4,5,6,7};
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}