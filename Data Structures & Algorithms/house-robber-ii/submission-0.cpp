class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> nums1(nums.begin()+1,nums.end());
        vector<int> nums2(nums.begin(),nums.end()-1);
        return max(nums[0], max(helper(nums1),helper(nums2))
        );
    }
    int helper(vector<int>& nums){
        int prev1=0;
        int prev2=0;
        for(int num:nums){
            int temp=max(prev2+num,prev1);
            prev2=prev1;
            prev1=temp;
        }
        return prev1;
    }
};
