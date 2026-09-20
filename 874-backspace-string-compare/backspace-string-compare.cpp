class Solution {
public:
    bool backspaceCompare(string s, string t) {
        

        int i =0;
        int j=0;

        while(i<s.length() || j<t.length()){
            if(i<s.length()){

                if(s[i]=='#'){
                    if(i>0){
                        s.erase(i-1,2);
                        i--;
                    }
                    else{
                        s.erase(i,1);
                    }
                }
                else{
                    i++;
                }
            }
            if(j<t.length()){
                if(t[j]=='#'){
                    if(j>0){
                        t.erase(j-1,2);
                        j--;
                    }
                    else{
                        t.erase(j,1);
                    }
                }
                else{
                    j++;
                }
            }

        }
        if(s==t){
            return true;
        }
        return false;
    }
};