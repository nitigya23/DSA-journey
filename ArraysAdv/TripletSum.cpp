#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> tripletSum(int arr[], int size, int target) {
    vector<vector<int>> ans;   
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {   
                if (arr[i] + arr[j] + arr[k] == target) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    vector<vector<int>> result = tripletSum(arr, size, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
    }
    return 0;
}


