/*
Kth Smallest Element In Tree

Asked in:  
Amazon
Given a binary search tree, write a function to find the kth smallest element in the tree.

Example :

Input : 
  2
 / \
1   3

and k = 2

Return : 2

As 2 is the second smallest element in the tree.
 NOTE : You may assume 1 <= k <= Total number of nodes in BST 
*/

Solution:
void solve(TreeNode* A, int &B, int &res)
{   if(A==NULL) return;
    solve(A->left,B,res);
    B--;
    if(B==0) 
    {   res=A->val; 
        return;
    }
    solve(A->right,B,res);
}
int Solution::kthsmallest(TreeNode* A, int B) 
{   int res=0;
    solve(A,B,res);
    return res;
}


















