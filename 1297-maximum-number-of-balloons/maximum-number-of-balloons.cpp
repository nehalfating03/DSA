class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.length();

        unordered_map<char , int>mp;
        for(int i = 0; i<n ;i++){
            mp[text[i]]++;
        }
        int count = 0;
        while(mp['b']>=1 && mp['a']>= 1 && mp['l']>=2 && mp['o']>=2 && mp['n']>= 1){
            mp['b']-= 1;
            mp['a'] -= 1;
            mp['l'] -=2;
            mp['o'] -=2;
            mp['n'] -=1;

            count++;
        }
        return count;
    }
};