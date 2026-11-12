#include <iostream>
#include <vector>
using namespace std;

bool rotatedSorted(vector<int> &nums){
    int count=0;
    int n=nums.size();

    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
    }
    return count<=1;
}
int main(){

    vector<int> nums1={3,4,5,1,2};
    cout<<rotatedSorted(nums1)<<endl;
    vector<int> nums2={1,2,3,7,5};
    cout<<rotatedSorted(nums2);
    return 0;

}