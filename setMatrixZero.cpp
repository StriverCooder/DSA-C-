class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        unordered_map<int,vector<pair<int,int>>>mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0) mp[matrix[i][j]].push_back({i,j});
            }
        }
        for(auto & it:mp){
            for(auto &idx:it.second){
                int a=idx.first;
                int b=idx.second;

                for(int j=0;j<n;j++){
                    matrix[a][j]=0;
                }
                for(int i=0;i<m;i++){
                    matrix[i][b]=0;
                }
            }
        }
    }
};
