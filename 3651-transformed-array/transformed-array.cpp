class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        
        for( int i = 0 ; i<n ; i++){
            int index = (i + nums[i])%n;
            if(index <0){
                index += n;
            }
            ans[i] = nums[index];
                
        }
        return ans;
    }
};