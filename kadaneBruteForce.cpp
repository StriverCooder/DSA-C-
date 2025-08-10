#include <bits/stdc++.h>
using namespace std;
//importance of this in Dsa
int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = arr.size();
    int maxSum = INT_MIN;

    // Check every possible subarray
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int currentSum = 0;

            // Sum from i to j
            for (int k = i; k <= j; k++) {
                currentSum += arr[k];
            }

            maxSum = max(maxSum, currentSum);
        }
    }

    cout << "Maximum Subarray Sum (Brute Force): " << maxSum << endl;
    return 0;
}
