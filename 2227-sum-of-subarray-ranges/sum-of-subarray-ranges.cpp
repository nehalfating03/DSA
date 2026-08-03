class Solution {
public:
    vector<int> prevsmaller(vector<int>& nums){
        int n = nums.size();
        vector<int> prevs(n);
        stack<int> st;

        for(int i = 0 ; i<n ; i++){
            while(!st.empty() && nums[st.top()]> nums[i]){
                st.pop();
            }
            if (st.empty()) {
                prevs[i] = -1;
            }
            else {
                prevs[i] = st.top();
            }

            st.push(i);
        }
        return prevs;
    }
    vector<int> nextsmaller(vector<int>& nums){
        int n = nums.size();
        vector<int> nexts(n);
        stack<int> st;

        for(int i = n-1 ; i>=0 ; i--){
            while(!st.empty() && nums[st.top()]>= nums[i]){
                st.pop();
            }
            if (st.empty()) {
                nexts[i] = n;
            }
            else {
                nexts[i] = st.top();
            }

            st.push(i);
        }
        return nexts;
    }
    vector<int> prevgreater(vector<int>& nums){
        int n = nums.size();
        vector<int> prevg(n);
        stack<int> st;

        for(int i = 0 ; i<n ; i++){
            while(!st.empty() && nums[st.top()]< nums[i]){
                st.pop();
            }
            if (st.empty()) {
                prevg[i] = -1;
            }
            else {
                prevg[i] = st.top();
            }

            st.push(i);
        }
        return prevg;
    }
    vector<int> nextgreater(vector<int>& nums){
        int n = nums.size();
        vector<int> nextg(n);
        stack<int> st;

        for(int i = n-1 ; i>=0; i--){
            while(!st.empty() && nums[st.top()]<= nums[i]){
                st.pop();
            }
            if (st.empty()) {
                nextg[i] = n;
            }
            else {
                nextg[i] = st.top();
            }

            st.push(i);
        }
        return nextg;
    }

    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();

        vector<int>prevsmall = prevsmaller(nums);
        vector<int>nextsmall = nextsmaller(nums);
        vector<int>prevgreat = prevgreater(nums);
        vector<int>nextgreat = nextgreater(nums);

        long long minsum = 0;
        long long maxsum = 0;

        for(int i = 0; i< n ; i++){
            int left = i - prevsmall[i];
            int right = nextsmall[i] - i;
            minsum += 1LL * nums[i] * left * right;
        }
        for(int i = 0; i<n ; i++){
            int left = i - prevgreat[i];
            int right = nextgreat[i] - i;
            maxsum += 1LL * nums[i] * left * right;
        }
        return (long long)(maxsum - minsum);

    }
};