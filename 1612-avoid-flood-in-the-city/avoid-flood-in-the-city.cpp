class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int>ans(n,1);
        unordered_map<int , int>mp;
        set<int>st;

        for(int i = 0; i<n ; i++){
            if(rains[i]==0){
                st.insert(i);
            }
            else{
                int lake = rains[i];
                ans[i] = -1;

                if(mp.find(lake)!= mp.end()){

                    int lastfilled = mp[lake];

                    auto it = st.upper_bound(lastfilled);

                    if(it == st.end()){
                        return{};
                    }

                    int day = *it;
                    ans[day]= lake;
                    st.erase(it);
                }
                mp[lake]=i;
            }
        }
        return ans;
    }
};