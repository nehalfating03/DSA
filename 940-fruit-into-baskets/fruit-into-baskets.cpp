class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int k = 2;
        int n = fruits.size();
        int left = 0;
        int ans = 0;

        unordered_map<int ,int>mp;
        for(int right = 0 ; right<n ; right++){
            mp[fruits[right]]++;

            while(mp.size()>k){
                mp[fruits[left]]--;

                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            if(mp.size()<=k){
                ans = max(ans , right - left + 1);
            }
        }
        return ans;
    }
};