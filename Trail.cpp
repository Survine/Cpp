class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        int row = mat.size();
        int col = mat[0].size();
        vector<int> ans;
        int temp = INT_MIN;
        int rowNo = 0;
        for (int i = 0; i < row; i++)
        {
            int oneCount = 0;
            for (int j = 0; j < col; j++)
            {
                if (mat[i][j] == 1)
                {
                    oneCount++;
                }
            }
            if (oneCount > temp)
            {
                temp = oneCount;
                row = i;
            }
        }
        ans.push_back(row);
        ans.push_back(temp);

        return ans;
    }
};