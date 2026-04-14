class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>maxH;
        vector<int>output;
        for(int i=0;i<nums.size();i++){
            maxH.push({nums[i],i});
            if(i>=k-1){
                while(maxH.top().second<=i-k){
                    maxH.pop();
                }
                output.push_back(maxH.top().first);
            }
        }
        return output;
    }
};
