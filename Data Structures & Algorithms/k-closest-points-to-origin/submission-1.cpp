class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> maxH;
        for(auto& p:points){
            int dist=p[0]*p[0]+p[1]*p[1];
            maxH.push({dist,{p[0],p[1]}});
            if(maxH.size()>k){
                maxH.pop();
            }
        }
        vector<vector<int>> res;
        while(!maxH.empty()){
            res.push_back({maxH.top().second.first,maxH.top().second.second});
            maxH.pop();
        }
        return res;
    }
};
