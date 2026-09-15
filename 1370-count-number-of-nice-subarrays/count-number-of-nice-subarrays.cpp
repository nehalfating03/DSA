class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int n = nums.size();
        int left=0;
        int right = 0;
        int count =0;
        int odd = 0;

        while(right<n){
            if(nums[right]%2==1){
                odd++;
            }
            while(odd>k){
                if(nums[left] % 2 == 1) {
                    odd--;
                }

                left++;
            }
            count += right - left +1;
            right++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
      return  atMost(nums,k) - atMost(nums,k-1);
    }
};