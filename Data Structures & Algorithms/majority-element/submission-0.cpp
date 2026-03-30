class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int num:nums){
            int count=0;
            for(int i:nums){
                if(i==num){
                    count++;
                }
            }
            if(count>nums.size()/2){
                return num;
            }
        }
        return -1;
    }
};