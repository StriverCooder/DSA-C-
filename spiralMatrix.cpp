class Solution {
public:
    vector<int> helper(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();

        int minr = 0;
        int minc = 0;
        int maxr = m - 1;
        int maxc = n - 1;

        vector<int>v;
        for (int i = 0; i < m; i++) {
            if (minr <= maxr && minc <= maxc) {
                // right -> column wise j
                for (int j = minc; j <= maxc; j++) {
                    v.push_back(arr[minr][j]);
                }
                minr++;

                if (minr > maxr || minc > maxc)
                    break;

                // down -> row wise i
                for (int i = minr; i <= maxr; i++) {
                    v.push_back(arr[i][maxc]);
                }
                maxc--;

                if (minr > maxr || minc > maxc)
                    break;

                // left -> column wise j
                for (int j = maxc; j >= minc; j--) {
                    v.push_back(arr[maxr][j]);
                }
                maxr--;

                if (minr > maxr || minc > maxc)
                    break;

                // up -> row wise i
                for (int i = maxr; i >= minr; i--) {
                    v.push_back(arr[i][minc]);
                }
                minc++;

                if (minr > maxr || minc > maxc)
                    break;

            } // if block outer wala.
        }
        return v;
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        return helper(matrix);
    }
};
