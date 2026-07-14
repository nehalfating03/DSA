class Solution {
public:
    bool isPalindrome(string s) {
         string original = "";

        for (int i = 0; i < s.length(); i++) {

            if (isalnum(s[i])) {
                original += tolower(s[i]);
            }
        }

        string rev = original;

        reverse(rev.begin(), rev.end());

        if (original == rev) {
            return true;
        }
        else {
            return false;
        }
    }
};