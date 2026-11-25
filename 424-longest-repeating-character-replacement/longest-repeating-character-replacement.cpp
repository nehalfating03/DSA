class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int left = 0;
        int ans = 0;
        int maxfreq =0;

        unordered_map<int,int>freq;

        for(int right = 0; right<n;right++){
            
            freq[s[right] - 'A']++;

            maxfreq = max(maxfreq, freq[s[right] - 'A']);
             int length = right - left + 1;

            while(length - maxfreq > k){
                freq[s[left] - 'A']--;
                left++;
                length--;
            }
            ans = max(ans,right - left + 1);
        }
        return ans;
    }
};