class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;
        vector<int>valid(n,0);
        valid[0]=1;
        valid[n-1]=1;
        int rightl = nums[n-1];
        int leftl = nums[0];

        for(int i = n-2 ; i>0 ;i--){
            if(nums[i]>rightl){
                valid[i]=1;
                rightl = nums[i];
            }
        }
        for(int i = 1 ; i<n-1 ; i++){
            if(nums[i]>leftl){
                valid[i]=1;
                leftl = nums[i];
            }
        }
        for(int i = 0; i<n ; i++){
            if(valid[i]==1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};