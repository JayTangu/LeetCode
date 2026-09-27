class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top_limit = 0;
        int right_limit = matrix[0].size() - 1;
        int down_limit = matrix.size() - 1;
        int left_limit = 0;
        int turn = 0;
        int count;
        vector<int> ans;
        if(matrix.size() < matrix[0].size())
            count = matrix.size()*2-1;
        else
            count = matrix[0].size()*2-1;
        while(count) {
            if(turn == 0)
                for(int i = left_limit; i <= right_limit ; i++) {
                    ans.push_back(matrix[left_limit][i]);
                    if(i==right_limit){
                        turn++;
                        top_limit++;
                    }
                }
            if(turn == 1)
                for(int i = top_limit; i <= down_limit ; i++) {
                    ans.push_back(matrix[i][right_limit]);
                    if(i==down_limit){
                        turn++;
                        right_limit--;
                    }
                }
            if(turn == 2)
                for(int i = right_limit; i >= left_limit ; i--) {
                    ans.push_back(matrix[down_limit][i]);
                    if(i==left_limit){
                        turn++;
                        down_limit--;
                    }
                }
            if(turn == 3)
                for(int i = down_limit; i >= top_limit ; i--) {
                    ans.push_back(matrix[i][left_limit]);
                    if(i==top_limit){
                        turn = 0;
                        left_limit++;
                    }
                }
            count--;
        }
    return ans;
    }
};