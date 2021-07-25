/*
Longest Common Subsequence

Asked in:  
ajio
Problem Description

Given two strings A and B. Find the longest common sequence ( A sequence which does not need to be contiguous), which is common in both the strings.

You need to return the length of such longest common subsequence.



Problem Constraints
1 <= |A|, |B| <= 1005



Input Format
First argument is an string A.

Second argument is an string B.



Output Format
Return the length of such longest common subsequence between string A and string B.



Example Input
Input 1:

 A = "abbcdgf"
 B = "bbadcgf"


Example Output
Output 1:

 5


Example Explanation
Explanation 1:

 The longest common subsequence is "bbcgf", which has a length of 5
 */

Solution:
int Solution::solve(string A, string B) 
{   int m=A.length();
    int n=B.length();
    if(m<1 || n<1) return 0;
    vector<vector<int>> dp(m+1,vector<int> (n+1,0));
    for(int i=1;i<=m;i++)
    {   for(int j=1;j<=n;j++)
        {   if(A[i-1]==B[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][n];
}
