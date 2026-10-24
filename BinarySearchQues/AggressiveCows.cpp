#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool possibleSolution(vector<int> &stalls, int k, int mid) {
    int cowsCount = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= mid) {
            cowsCount++;

            if (cowsCount == k) {
                return true;
            }

            lastPos = stalls[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int s = 1;
    int maxi = stalls.back();
    int mini = stalls[0];

    int e = maxi - mini;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e) {
        if (possibleSolution(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}
int main(){
    vector<int> stalls={4,2,1,3, 6};
    int k=2;
    int cows=aggressiveCows(stalls,k);
    cout<<cows<<endl;

}