class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        int degree = 0;
        unordered_map<int , int>mp;
        for(int i =0 ; i<n ; i++){
            mp[nums[i]]++;

            degree = max(degree , mp[nums[i]]);
        }
        int ans = n;
        int left = 0;
        unordered_map<int , int>mp1;
        for(int i = 0 ; i<n ; i++){
            mp1[nums[i]]++;
            while(mp1[nums[i]]==degree){
                ans = min ( ans , i - left + 1);
                mp1[nums[left]]--;
                left++;
            }
        }
        return ans;
    }
};