class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int left = 0;
        int sum = 0;

        unordered_map<int ,int> mp;

        for(int right = 0; right<n ;right++){
            mp[nums[right]]++;
            sum += nums[right];

            while(mp[nums[right]] > 1){
                mp[nums[left]]--;
                sum-=nums[left];

                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }

                left++;
            }
            ans = max(ans , sum);
        }
        return ans;

    }
};