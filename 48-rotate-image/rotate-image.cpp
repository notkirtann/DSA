class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int i = 0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(i==j) continue;
                else swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i =0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        //<-----------IF EXTRA SPACE CAN BE TAKEN----------------->
        // vector<vector<int>> ans;
        // int n = matrix.size();
        // for(int i = 0;i<matrix.size();i++)
        // {
        //     for(int j=0;j<matrix.size();j++)
        //     {
        //         ans[j][n-1-i]=matrix[i][j];
        //     }
        // }
        // return ans;
    }
};