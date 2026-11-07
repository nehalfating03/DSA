class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int ans = 0;

        for(int i = 0; i<n ; i++){
            mp[nums[i]]++;
        }
        for(auto x : mp){
            if(x.second == 1){
                ans = x.first;
            }
        }
        return ans;
    }
};