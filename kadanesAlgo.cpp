#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = arr.size();

    int maxSoFar = arr[0];    // Stores overall maximum
    int maxEndingHere = arr[0]; // Stores current subarray max

    for (int i = 1; i < n; i++) {
        // Either start a new subarray or extend the current one
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    cout << "Maximum Subarray Sum: " << maxSoFar << endl;
    return 0;
}
