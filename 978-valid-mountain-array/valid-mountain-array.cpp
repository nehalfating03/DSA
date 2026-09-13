class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3){
            return false;
        }
        int idx = 0;
        
            for(int i = 1; i<n ; i++){
                if(arr[i]>arr[i-1] ){
                    idx = i;
                }
                else{
                    break;
                }
            }
            if(idx == 0 || idx == n-1){
                return false;
            }
            for(int j = idx; j<n-1 ; j++){
                if(arr[j]<=arr[j+1] ){
                    return false;
                }
            }
        
        
        return true;

    }
}; 