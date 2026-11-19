class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long i = 1 ; i<= num ; i++){
            long long mul = i * i;
            if(mul == num){
                return true;
            }
            if(mul > num){
                return false;
            }
        }
        return false;
    }
};