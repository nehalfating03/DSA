class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        int j = -1;
        for(int i = 0 ; i<n ;i++){
            if(nums[i]==val){
                j = i;
                break;
            }
        }
        if(j==-1){
            return n ;
        }

        for(int i = j+1 ; i<n ; i++){
            if(nums[i] != val){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
        return j;
        
    }
};