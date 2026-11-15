class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>ans;

        for(int i = 0; i<arr1.size() ; i++){
            mp[arr1[i]]++;
        }
        for(int i = 0; i<arr2.size() ; i++){
            int a = arr2[i];

            if(mp.find(a)!= mp.end()){
                while(mp[arr2[i]]>0){
                    ans.push_back(arr2[i]);
                    mp[arr2[i]]--;
                }
            }
        }
        for(auto x : mp){
            if(x.second > 0){
                while(x.second > 0){
                    ans.push_back(x.first);
                    x.second--;
                }
            }
        }
        return ans;
    }
};