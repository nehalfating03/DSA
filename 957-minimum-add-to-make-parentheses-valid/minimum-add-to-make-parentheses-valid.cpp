class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        int count1 = 0;
        int ans = 0;
        

        for(int i = 0 ; i<n ; i++){
            if(s[i]=='('){
                count1++;
            }
            else{
                if(count1 > 0){
                    count1--;
                }
                else{
                    ans++;
                }
            }

        }
        ans+=count1;
        return ans;
    }
};