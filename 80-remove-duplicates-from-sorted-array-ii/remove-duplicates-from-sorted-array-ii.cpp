class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> freq;

        for(int x : nums) {
            freq[x]++;
        }

        int i = 0;

        for(auto x : freq) {
            int num = x.first;
            int count = x.second;

            if(count >= 2) {
                nums[i] = num;
                i++;

                nums[i] = num;
                i++;
            }
            else {
                nums[i] = num;
                i++;
            }
        }

        return i;
    }
};