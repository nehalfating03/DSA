class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>res;

        for(int i = 0; i<arr.size() ; i++){
            res.push_back({abs(arr[i]-x) , arr[i]});
        }
        sort(res.begin(),res.end());
        vector<int>ans;

        for(int i = 0; i<k ; i++){
            ans.push_back(res[i].second);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};