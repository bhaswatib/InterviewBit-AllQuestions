/*
Rotate Matrix

Asked in:  
Google
Facebook
Amazon
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note that if you end up using an additional array, you will only receive partial score.

Example:

If the array is

[
    [1, 2],
    [3, 4]
]
Then the rotated array becomes:

[
    [3, 1],
    [4, 2]
]
*/

Solution:
Rotate 90 degree to the right.

void Solution::rotate(vector<vector<int> > &A) 
{   int n=A.size();
    for(int i=0;i<n;i++)
    {   for(int j=i;j<n;j++)
        {   int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {   int low=0,high=n-1;
        while(low<high)
        {   int temp=A[i][low];
            A[i][low]=A[i][high];
            A[i][high]=temp;
            low++;
            high--;
        }
    }
    return A;
}

Rotate 90 degree to the left.
void Solution::rotate(vector<vector<int> > &A) 
{   int n=A.size();
    for(int i=0;i<n;i++)
    {   for(int j=i;j<n;j++)
        {   int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {   int low=0,high=n-1;
        while(low<high)
        {   int temp=A[low][i];
            A[low][i]=A[high][i];
            A[high][i]=temp;
            low++;
            high--;
        }
    }
    return A;
}
