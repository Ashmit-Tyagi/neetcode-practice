class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> wind;
        for(int i=0;i<nums.size();i++){
            int remaining=target-nums[i];
            if(wind.count(remaining)){
                return {wind[remaining],i};
            }
            wind[nums[i]]=i;
        }
    }
};
