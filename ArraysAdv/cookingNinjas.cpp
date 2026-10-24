#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool possibleSolution(vector<int> &rank, int m, long long mid) {
    long long totalDishes = 0;

    for (int i = 0; i < rank.size(); i++) {
        long long time = 0;
        int r = rank[i];

        for (int j = 1; ; j++) {
            time += 1LL * r * j;

            if (time > mid) {
                break;
            }

            totalDishes++;

            if (totalDishes >= m) {
                return true;
            }
        }
    }

    return false;
}

int minCookTime(vector<int> &rank, int m) {
    long long low = 0;

    int minRank = *min_element(rank.begin(), rank.end());

    long long high = 1LL * minRank * m * (m + 1) / 2;
    long long ans = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (possibleSolution(rank, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> rank = {1, 2, 3, 4};
    int m = 11;

    cout << minCookTime(rank, m) << endl;

    return 0;
}