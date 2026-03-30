class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> wind;
        int L=0;
        for(int R=0;R<nums.size();R++){
            if(R-L>k){
                wind.erase(nums[L]);
                L++;
            }
            if(wind.find(nums[R])!=wind.end()){
                return true;
            }
            wind.insert(nums[R]);
        }
        return false;
    }
};