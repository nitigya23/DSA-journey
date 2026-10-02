#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//My solution

    int findDuplicate(vector<int> &arr) 
{
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
	for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}


int main(){
    vector<int> arr={1,2,3,4,5,6,2,3};
    cout<<"Duplicates numbers in the array are: ";
    findDuplicate(arr);
}