/*
Longest Increasing Subsequence

Asked in:  
Facebook
Yahoo
Epic systems
Amazon
Microsoft
Find the longest increasing subsequence of a given array of integers, A.

In other words, find a subsequence of array in which the subsequence’s elements are in strictly increasing order, and in which the subsequence is as long as possible.
This subsequence is not necessarily contiguous, or unique.
In this case, we only care about the length of the longest increasing subsequence.


Input Format:

The first and the only argument is an integer array A.
Output Format:

Return an integer representing the length of the longest increasing subsequence.
Constraints:

1 <= length(A) <= 2500
1 <= A[i] <= 2000
Example :

Input 1:
    A = [1, 2, 1, 5]

Output 1:
    3
    
Explanation 1:
    The sequence : [1, 2, 5]

Input 2:
    A = [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
    
Output 2:
    6

Explanation 2:
    The sequence : [0, 2, 6, 9, 13, 15] or [0, 4, 6, 9, 11, 15] or [0, 4, 6, 9, 13, 15]
*/

Solution:
Time O(n^2)
int Solution::lis(const vector<int> &A) 
{   int n=A.size();
    vector<int> dp(n+1);
    dp[0]=1;
    int res=1;
    for(int i=1;i<n;i++)
    {   dp[i]=1;
        for(int j=0;j<i;j++)
        {   if(A[j]<A[i]) dp[i]=max(dp[i],dp[j]+1);
        }
        res=max(res,dp[i]);
    }
    return res;
}


Time O(nlogn)
int Solution::lis(const vector<int> &A) 
{   int n=A.size();
    vector<int> tail(n);
    int len=1;
    tail[0]=A[0];
    for(int i=1;i<n;i++)
    {   if(A[i]>tail[len-1])
        {   tail[len]=A[i];
            len++;
        }
        else
        {   int c=ceiling(tail,0,len-1,A[i]);
            tail[c]=A[i];
        }
    }
    return len;
}
int ceiling(vector<int> tail, int b, int e, int x)
{   while(b<e)
    {   int m=(b+e)/2;
        if(tail[m]>=x) e=m;
        else b=m+1;
    }
    return e;
}










