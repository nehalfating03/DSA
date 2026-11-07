class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        int m = k;
        sort(nums.begin(),nums.end());
        int sum = 0;

        for(int i = 0; i<n ; i++){
            if(nums[i]<0 && m>0){
                nums[i] = -nums[i];
                m--;
            }
        }
        sort(nums.begin(),nums.end());

        if(m%2==1 && m>0){
            nums[0] = -nums[0];
        }
        for(int i = 0; i<n ;i++){
            sum+=nums[i];
        }
        return sum;
    }
};