/*
Spiral Order Matrix I

Asked in:  
Microsoft
JP Morgan
Amazon
Flipkart
Adobe

Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]
*/

Solution:

vector<int> spiralorder(const vector<vector<int>> &A)
{   vector<int> res;
    int n=A.size();
    int bottom=A.size()-1;
    int right=A[0].size()-1;
    int top=0,left=0;
    while(top<=bottom && left<=right)
    {   for(int i=left;i<=right;i++)
        {   res.push_back(A[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {   res.push_back(A[i][right]);
        }
        right--;
        if(top<=bottom)
        {   for(int i=right;i>=left;i--)
            {   res.push_back(A[bottom][i]);
            }
            bottom--;
        }
        if(left<=right)
        {   for(int i=bottom;i>=top;i--)
            {   res.push_back(A[i][left]);
            }
            left++;
        }
    }
    return res;
}
