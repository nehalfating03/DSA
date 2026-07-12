class Solution {
public:
    int countnoofbouquet(vector<int>&bloomDay , int day , int k){
        int count = 0;
        int bouquet = 0;

        for(int i =0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                bouquet += count/k;
                count = 0;
            }
        }
        bouquet += count / k;   
        return bouquet;
    } 
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long flowerneed = 1ll*m*k;
        if(flowerneed>bloomDay.size()){
            return -1;
        } 
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());

        while(low<=high){
            int mid = (low + high)/2;
            int bouquetcount = countnoofbouquet(bloomDay,mid,k);

            if(bouquetcount >= m){
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
        }
        return low;

        
    }
};