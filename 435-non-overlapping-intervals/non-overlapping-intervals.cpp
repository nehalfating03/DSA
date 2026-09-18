class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>> ans;

        for(auto x: intervals){
            ans.push_back({x[1],x[0]});
        }

        sort(ans.begin(),ans.end());

        int count = 1;
        int lastend = ans[0].first;

        for(int i = 1; i<ans.size();i++){
            if(ans[i].second >= lastend){
                count++;
                lastend = ans[i].first;
            }
        }
        return ans.size()-count;
    }
};