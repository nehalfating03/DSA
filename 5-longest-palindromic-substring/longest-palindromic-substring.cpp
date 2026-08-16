class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {

                int l = i;
                int r = j;
                bool palindrome = true;

                while (l < r) {
                    if (s[l] != s[r]) {
                        palindrome = false;
                        break;
                    }
                    l++;
                    r--;
                }

                if (palindrome && j - i + 1 > ans.length()) {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }

        return ans;
    }
};