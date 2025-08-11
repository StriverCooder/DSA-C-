class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        int n=txt.length(),m=pat.length();
        vector<int>v;
        for(int i=0;i<n;i++){
            int first=i,second=0;
            while(second<m){
                if(txt[first]!=pat[second]) break;
                else{
                    first++;
                    second++;
                }
            }
            if(second==m) v.push_back(first-second);
        }
        return v;
    }
};
