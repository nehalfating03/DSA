class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
 
        vector<int>firsthalf;
        vector<int>secondhalf;

        vector<int>ans;

        int mid = (n+1)/2;

        for(int i =0; i<mid ; i++){
            firsthalf.push_back(nums[i]);
        }
        for(int i =n-1; i>=mid ; i--){
            secondhalf.push_back(nums[i]);
        }
        int j = firsthalf.size()-1;
        int k = 0;
        for(int i = 0 ; i<n ; i++){
            if(i%2==0){
                ans.push_back(firsthalf[j]);
                j--;
            }
            else{
                ans.push_back(secondhalf[k]);
                k++;
            }
        }
        nums=ans;
        return;
    }
};