class Solution {
public:
    vector<int> evenOddBit(int n) {
        string binaryno = "";

        while(n>0){
            int rem = n%2;
            binaryno += to_string(rem);
            n= n/2;
        }
        reverse(binaryno.begin() , binaryno.end());

        int pos = 0;
        int even = 0;
        int odd = 0;
        
        for(int i = binaryno.size()-1; i>=0;i--){
            if(binaryno[i]=='1'){
                if(pos%2 == 0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            pos++;
        }
        return{even,odd};
    }
};