#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
vector<vector<int>> ans;  //declared a vector of vector here
vector<vector<int>> pairSum(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                vector <int> temp;
                temp.push_back(min(arr[i], arr[j])); //push min of both the values
                temp.push_back(max(arr[i],arr[j])); //push max of both the valeus

                ans.push_back(temp); //push the whole temp to ans

            }
        }

    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=5;
    vector<vector<int>> result = pairSum(arr, size, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i][0] << " " << result[i][1] << endl;
    }
    return 0;


}