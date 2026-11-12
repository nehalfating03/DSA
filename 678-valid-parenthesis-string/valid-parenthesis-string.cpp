class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int count1 = 0;

        for(int i = 0; i<n ;i++){
            if(s[i]=='*'|| s[i]=='('){
                count1++;
            }
            else{
                count1--;
            }
            if(count1 < 0){
                return false;
            }
        }
        count1 = 0;
        for(int i = n-1; i>=0 ;i--){
            if(s[i]=='*'|| s[i]==')'){
                count1++;
            }
            else{
                count1--;
            }
            if(count1 < 0){
                return false;
            }
        }
        return true;
        
    }
};