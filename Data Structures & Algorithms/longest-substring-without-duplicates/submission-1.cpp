class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> cSet;
        int l=0;
        int res=0;
        for(int r=0;r<s.size();r++){
            while(cSet.find(s[r])!=cSet.end()){
                cSet.erase(s[l]);
                l++;
            }
        cSet.insert(s[r]);
        res=max(res,r-l+1);
        }
        return res;
    }
};
