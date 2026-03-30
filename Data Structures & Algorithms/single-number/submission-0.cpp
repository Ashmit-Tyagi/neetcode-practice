class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique_element=0;
        for(int i=0;i<nums.size();i++){
            unique_element=unique_element^nums[i];
        }
        return unique_element;
    }
};
