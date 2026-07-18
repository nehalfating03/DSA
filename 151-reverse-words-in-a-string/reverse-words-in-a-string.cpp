class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());

        string ans ="";

        for(int i = 0; i<s.length();i++){

            if(s[i] == ' '){
                continue;
            }
            string word ="";

            while(i<s.length() &&  s[i] != ' '){
                word += s[i];
                i++;
            }
            reverse(word.begin() , word.end());

        
            if(ans.empty()){
                ans+=word;
            }
            else{
                ans+=" "+ word;
            }
        }
        return ans;
    }
};