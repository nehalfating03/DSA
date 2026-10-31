class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string original ="";
        for(int i = 0 ; i<n ; i++){
            if(isalnum(s[i])){
                original += tolower(s[i]);
            }
        }
        string rev = original;
        reverse(rev.begin(), rev.end());

        if(original == rev){
            return true;
        }
        else{
            return false;
        }
    }
};