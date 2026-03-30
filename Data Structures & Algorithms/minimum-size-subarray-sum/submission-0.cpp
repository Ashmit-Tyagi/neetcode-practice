class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int total=0;
        int res=INT_MAX;
        int l=0;
        for(int r=0;r<nums.size();r++){
            total+=nums[r];
            while(total>=target){
                res=min(res,r-l+1);
                total-=nums[l];
                l++;
            }
        }
        if(res==INT_MAX){
            return 0;
        }
        return res;
    }
};