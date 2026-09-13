class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        for(int i = 1 ; i<n ;i++){
            if(nums[i]> nums[i-1]){
                idx = i+1;
            }
            else{
                break;
            }
        }
        if(idx == 0) {
            return false;
        }
        int idx1 = idx;
        for(int j = idx ; j<n ;j++){
            if(nums[j]< nums[j-1]){
                idx1 = j+1;
            }
            else{
                break;
            }
        }
        if(idx1 == idx) {
            return false;
        }
        
        for(int j = idx1 ; j<n ;j++){
            if(nums[j]<=nums[j-1]){
                return false;
            }
           
        }
        if(idx1 == n) {
            return false;
        }
        return true;

    }
};