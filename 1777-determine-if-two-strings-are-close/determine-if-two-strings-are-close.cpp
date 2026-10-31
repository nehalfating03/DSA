class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i = 0; i<n ; i++){
            mp1[word1[i]]++;
        }
        for(int i = 0; i<m ; i++){
            mp2[word2[i]]++;
        }

        for(auto it : mp1){
            if(mp2.find(it.first)==mp2.end()){
                return false;
            }
        }

        vector<int> freq1;
        vector<int> freq2;

        for(auto it : mp1){
            freq1.push_back(it.second);
        }

        for(auto it : mp2){
            freq2.push_back(it.second);
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());

        return freq1 == freq2;

    }
};