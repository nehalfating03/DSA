class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();

        string ans = "";

        for(int i = 0; i < first.length() && i < last.length(); i++) {

            if(first[i] != last[i])
                break;

            ans += first[i];
        }

        return ans;
    }
};