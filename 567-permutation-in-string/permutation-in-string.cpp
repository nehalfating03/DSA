class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        vector<int>freq(26 , 0);
        vector<int>window(26,0);
        if(m<n){
            return false;
        }

        for(int i = 0; i<n ; i++){
            freq[s1[i] - 'a']++;
            window[s2[i] - 'a']++;
        }
        if(freq == window){
            return true;
        }
        for(int i = n ; i< m ; i++){
            window[s2[i-n] - 'a']--;
            window[s2[i]- 'a']++;

            if(freq == window){
                return true;
            }
        }
        return false;

    }
};