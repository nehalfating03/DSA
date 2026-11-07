class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total = 0;
        for(int i = 0; i<apple.size();i++){
            total+=apple[i];
        }
        int count = 0;
        int j = 0;
        sort(capacity.rbegin(), capacity.rend());
        
        for(int i = 0; i < capacity.size(); i++) {

            total -= capacity[i];
            count++;

            if(total <= 0) {
                break;
            }
        }

        return count;
    }
};