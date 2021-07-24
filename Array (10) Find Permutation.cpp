/*
Find Permutation

Asked in:  
Goldman Sachs
Amazon
Given a positive integer n and a string s consisting only of letters D or I, you have to find any permutation of first n positive integer that satisfy the given input string.

D means the next number is smaller, while I means the next number is greater.

Notes

Length of given string s will always equal to n - 1
Your solution should run in linear time and space.
Example :

Input 1:

n = 3

s = ID

Return: [1, 3, 2]
*/

Solution:
vector<int> Solution::findPerm(const string A, int B) 
{   int l=A.length();
    int greatest=B, smallest=1;
    vector<int> res;
    for(int i=0;i<l;i++)
    {   if(A[i]=='I') res.push_back(smallest);
        if(A[i]=='D') res.push_back(largest);
    }
    if(A[l-1]=='D') res.push_back(smallest);
    else if(A[l-1]=='I') res.push_back(largest);
    return res;
}
