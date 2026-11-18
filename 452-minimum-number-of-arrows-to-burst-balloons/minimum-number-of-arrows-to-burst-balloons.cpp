class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int count = 1;
        int lastend = points[0][1];

        for(int i = 1; i<points.size() ; i++){
            if(lastend >= points[i][0]){
                lastend = min(lastend , points[i][1]);
            }
            else{
                count++;
                lastend = points[i][1];
            }
        }
        return count;
    }
};