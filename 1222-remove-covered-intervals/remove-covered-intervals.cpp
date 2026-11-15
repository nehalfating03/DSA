class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int i = 1;
        int count = intervals.size();
        
        sort(intervals.begin(), intervals.end(),
        [](vector<int>& a, vector<int>& b) {
            if(a[0] == b[0])
                return a[1] > b[1];

            return a[0] < b[0];
        });

        int maxi0 = intervals[0][0];
        int maxi1 = intervals[0][1];


        while(i<intervals.size()){
            if(intervals[i][0] >= maxi0 && intervals[i][1] <= maxi1){
                count--;
            }
            else if(intervals[i][1] > maxi1){
                maxi0 = intervals[i][0];
                maxi1 = intervals[i][1];
            }
            i++;
        }
        return count;
    }
};