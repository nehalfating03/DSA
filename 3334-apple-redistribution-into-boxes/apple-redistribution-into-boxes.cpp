class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(apple.begin(), apple.end());
        sort(capacity.rbegin(), capacity.rend());

        int count = 0;
        int capacityleft = 0;

        int i = 0;
        int j = 0;

        while(i < apple.size() && j < capacity.size()) {

            if(capacityleft == 0) {
                capacityleft = capacity[j];
                count++;
                j++;
            }

            if(apple[i] <= capacityleft) {
                capacityleft -= apple[i];
                i++;
            }
            else {
                apple[i] -= capacityleft;
                capacityleft = 0;
            }
        }

        return count;
    }
};