/*
Sorted Array To Balanced BST

Asked in:  
VMWare
Amazon
Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

 Balanced tree : a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1. 
Example :


Given A : [1, 2, 3]
A height balanced BST  : 

      2
    /   \
   1     3
*/

Solution:
TreeNode* helper(const vector<int> &A, int low, int high)
{
  if(low>high) return NULL;
  int mid=(low+high)/2;
  TreeNode* root=new TreeNode(A[mid]);
  root->left=helper(A,low,mid-1);
  root->right=helper(A,mid+1,high);
  return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) 
{
  int n=A.size();
  if(n==0) return NULL;
  return helper(A,0,n-1);
}























