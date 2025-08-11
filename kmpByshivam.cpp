class Solution {
  public:
    void findLps(vector<int>&lps , string pat){
        int pre=0,suf=1;
        while(suf<pat.size()){
            if(pat[pre]==pat[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
    }
    
     vector<int> search(string &pat, string &txt) {
        int n1 = txt.size(), n2 = pat.size();
        vector<int> lps(n2, 0);
        findLps(lps, pat);

        vector<int> v;
        int first = 0, second = 0; // first = index in txt, second = index in pat

        while (first < n1) {
            if (txt[first] == pat[second]) {
                first++;
                second++;
                if (second == n2) {
                    v.push_back(first - second); // match found
                    second = lps[second - 1];   // continue search for overlaps
                }
            } else {
                if (second == 0) {
                    first++;
                } else {
                    second = lps[second - 1];
                }
            }
        }
        return v;
    }
};
