class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftsum = 0;
        int rightsum = 0;
        int ans = 0;

        for(int i = 0; i<k ;i++){
            leftsum+=cardPoints[i];
        }
        ans = leftsum;
        int right = n-1;

        for(int i = k-1 ; i>=0 ; i--){
            leftsum = leftsum - cardPoints[i];
            rightsum = rightsum + cardPoints[right];
            
            right--;

            ans = max(ans , leftsum + rightsum);
        }
        return ans;
        
    }
};