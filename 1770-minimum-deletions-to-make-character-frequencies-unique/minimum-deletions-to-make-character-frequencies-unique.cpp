class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char ,int> mp;

        for(int i = 0 ; i<s.length(); i++){
            mp[s[i]]++;
        }

        unordered_set<int> st;
        int ans = 0;

        for(auto x : mp){
            int freq = x.second;

            while(freq > 0 && st.find(freq) != st.end()){
                freq--;
                ans++;
            }
            st.insert(freq);
        }
        return ans;
    }
};