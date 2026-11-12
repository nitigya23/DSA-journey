#include <iostream>
#include <vector>
using namespace std; 

void rotate(vector<int> &nums,int k){
    vector<int> temp(nums.size());

    for(int i=0;i<nums.size();i++){ 
        temp[(i+k) % nums.size()] = nums[i];
    }

    //copy temp to nums:
    nums=temp;
}


int main(){
    vector<int> nums={3,4,5,65,76};
    rotate(nums,3);

}