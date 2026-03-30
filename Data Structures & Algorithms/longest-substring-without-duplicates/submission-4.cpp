class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int res=0;
        unordered_set<int> wind;
        for(int r=0;r<s.size();r++){
            while(wind.count(s[r])){
                wind.erase(s[l]);
                l++;
            }
            wind.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};
