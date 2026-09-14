class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0;

        for(int i = 0 ;i<n ; i++){
            total+= cardPoints[i];
        }
        int sum = 0;
        for(int i = 0 ; i<n-k ; i++){
            sum+=cardPoints[i];
        }
        int mini = sum;
        int left = 0;
        for(int i = n-k ; i<n ; i++){
            sum += cardPoints[i]-cardPoints[left];
            left++;
            mini = min(sum,mini);
        }
        return total - mini;


    }
};