class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int>mp;

        for(int i =0; i<n ; i++){
            mp[nums[i]]++;
        }
        vector<pair<int , int>>ans;

        for(auto x : mp){
            ans.push_back({x.second, x.first});
        }

        sort(ans.rbegin() , ans.rend());

        vector<int>a;

        for(int i = 0; i<k ; i++){
            a.push_back(ans[i].second);
        }
        return a;
    }
};