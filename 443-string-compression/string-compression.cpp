class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n==1){
            return 1;
        }
        int i = 0;
        int index = 0;
        while(i<n){
            char letter = chars[i];
            int count  =0;
            while(i<n && chars[i]==letter){
                count++;
                i++;
            }

            chars[index] = letter;
            index++;

            if(count > 1){
                string s = to_string(count);

                for(int i = 0; i<s.size(); i++){
                    chars[index]=s[i];
                    index++;
                }
            }

            
        }
        return index;
    }
};