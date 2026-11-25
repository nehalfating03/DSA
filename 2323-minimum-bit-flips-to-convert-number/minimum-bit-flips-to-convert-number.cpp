class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start^goal;
        int count = 0;
        string a ="";
        while(x>0){
            int rem = x%2;
            a += to_string(rem);
            x = x/2;
        }
        reverse(a.begin(),a.end());

        for(int i = 0; i<a.size();i++){
            if(a[i]=='1'){
                count++;
            }
        }
        return count;
    }
};