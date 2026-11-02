class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int>mp;

        for(int i = 0; i<nums1.size() ; i++){
            mp[nums1[i]]++;
        }
        vector<int>ans;
        for(auto x: mp){
            for(int i = 0; i<nums2.size();i++){
                if(nums2[i]== x.first){
                    ans.push_back(nums2[i]);
                    mp[x.first]=0;
                    break;
                }
            }
        }
        return ans;
    }
};