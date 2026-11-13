class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>>prodiff;

        for(int i = 0; i<profit.size() ; i++){
            prodiff.push_back({difficulty[i],profit[i]});
        }
        sort(prodiff.begin() , prodiff.end());
        sort(worker.begin(),worker.end());

        int j = 0;
        int ans = 0;
        int maxi = 0;

        for(int i = 0; i<worker.size() ;i++){
            while(j<prodiff.size() && prodiff[j].first <= worker[i]){
                maxi = max(maxi , prodiff[j].second);
                j++;
            }
            ans+=maxi;
        }
        return ans;
    }
};