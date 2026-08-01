class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int>ans;

        for(int i = 0; i<n ; i++){
            int k;
            int l;
            for(int j = 0; j<m ; j++){
                if(nums1[i]==nums2[j]){
                     k = nums2[j];
                     l = j;
                    break;
                }
            }
            int o;
            for( o = l+1 ; o<m; o++){
                if(nums2[o] > k){
                    ans.push_back(nums2[o]);
                    break;
                }
            
            }
            if(o == m){
                ans.push_back(-1);
            }
        }
        
        return ans;
    }
};