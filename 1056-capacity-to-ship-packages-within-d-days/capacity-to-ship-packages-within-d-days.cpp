class Solution {
public:
    int noofday(vector<int>&weight , int capacity){
        int day =1;
        int loads = 0;
        for(int i = 0;i<weight.size();i++){
            if(weight[i]+loads <= capacity){
                loads+=weight[i];
            }
            else{
                day++;
                loads = weight[i];
            }
        }
        return day;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(), 0);

        while(low<=high){
            int mid = (low + high)/2;
            int day = noofday(weights,mid);

            if(day <= days){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
        
        
    }
};