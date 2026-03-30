class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int res=0;
        while(l<=r){
            int remaining=limit-people[r];
            r--;
            res++;
            if(l<=r && people[l]<=remaining ){
                l++;
            }
        }
        return res;
    }
};