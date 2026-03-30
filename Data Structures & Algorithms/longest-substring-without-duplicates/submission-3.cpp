class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> wind;
        int l=0;
        int res=0;
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
