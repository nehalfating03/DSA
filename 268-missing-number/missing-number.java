class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;

        int xorr1 = 0;
        int xorr2 = 0;

        for(int i = 1; i<=n ;i++){
            xorr1^=i;
        }
        for(int j = 0 ; j<n ; j++){
            xorr2^=nums[j];
        }

        return xorr1^xorr2;
    }
}