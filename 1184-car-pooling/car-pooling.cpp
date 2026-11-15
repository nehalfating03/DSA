class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>distance(1001 ,0);

        for(int i = 0; i<trips.size() ;i++){
            int passenger = trips[i][0];
            int from = trips[i][1];
            int to = trips[i][2];

            distance[from] +=passenger;
            distance[to] -= passenger;

        }
        int count = 0;

        for(int i = 0; i<distance.size();i++){
            count+=distance[i];
            if(count > capacity){
                return false;
            }
        }
        return true;
    }
};