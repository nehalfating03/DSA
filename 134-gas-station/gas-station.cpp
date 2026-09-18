class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int m = cost.size();
        int totalgas = 0;
        int totalcost = 0;
        
        

        for(int i = 0; i<n ;i++){
            totalgas+=gas[i];
        }
        for(int i = 0; i<m ;i++){
            totalcost+=cost[i];
        }

        if(totalgas < totalcost){
            return -1;
        }
        int currgas = 0;
        int start = 0;

        for(int i = 0; i<n ;i++){
            currgas+= gas[i]-cost[i];

            if(currgas < 0){
                start = i+1;
                currgas =0; 
            }
        }
        return start;
    }
};