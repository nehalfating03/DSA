class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>mp;
        int ans = 0;
        for(int i = 0; i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto x: mp){
            if(x.second % 2==0){
                ans+=x.second;
            }
            else{
                ans+=x.second-1;
            }
        }
        for(auto x: mp){
            if(x.second % 2== 1){
                ans+=1;
                break;
            }
        }
        return ans;

    }
};