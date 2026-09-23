class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = 0 ; i<s.length();i++){
            if(s[i]==' '){
                if(s[i+1]!= ' ' && i+1 < s.length()){
                    count = 0;
                }
            }

            else{
                count++;
            }

            
        }
        return count;
    }
};