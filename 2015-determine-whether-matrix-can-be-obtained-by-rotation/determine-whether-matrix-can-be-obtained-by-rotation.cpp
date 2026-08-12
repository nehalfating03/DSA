class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();

        for(int k = 1; k<=4 ; k++){
            bool same = true;

            for(int i = 0 ; i<n ;i++){
                for(int j = 0 ; j<n ;j++){
                    if(mat[i][j] != target[i][j]){
                        same = false;
                    }
                }
                if(!same){
                    break;
                }
            }
            if(same){
                return true;
            }
            
            for(int i = 0 ; i<n ;i++){
                for(int j = i+1; j<n ;j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i = 0 ; i<n ; i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            

        }
        return false;
    }
};