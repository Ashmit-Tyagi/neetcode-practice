class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return isP(s,l+1,r) || isP(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
    }

private:
    bool isP(const string& s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};