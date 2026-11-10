class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        vector<int>ans;

        while( j<n){
            if(nums[i]==  nums[j]){
                count++;
            }
            else{
                i = j;
                count = 1;    
            }
            if(count<=k){
                ans.push_back(nums[j]);
            }
            j++;
            
            
        }
        return ans;
    }
};