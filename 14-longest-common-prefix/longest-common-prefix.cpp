class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[n-1];

        string ans = "";
        int i = 0;
        int j = 0;

        while(i<first.length() && j < last.length()){
            if(first[i] == last[i]){
                ans.push_back(first[i]);
                i++;
                j++;
            }
            
            else{
                break;
            }
        }
        return ans;



    }
};