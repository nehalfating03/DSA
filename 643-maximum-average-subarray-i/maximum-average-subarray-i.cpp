class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        for(int i = 0 ; i<k ; i++){
            sum+= nums[i];
        }

        int highest = sum;

        for(int j= k ; j<n ; j++){
            sum += nums[j];
            sum -= nums[j-k]; 

            highest = max(sum , highest);
        }
        return (double) highest/k;
    }
};