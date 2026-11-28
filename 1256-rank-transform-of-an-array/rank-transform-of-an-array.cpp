class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        
        vector<pair<int,int>>rank;

        for(int i = 0; i<n ; i++){
            rank.push_back({arr[i],i});
        }
        sort(rank.begin(),rank.end());

        int r = 1;
        vector<int>ans(n);
        for(int i = 0; i<n ; i++){
            if(i>0 && rank[i].first != rank[i-1].first){
                r++;
            }
            ans[rank[i].second] = r;
        }
        return ans;


    }
};