/*
Max Depth of Binary Tree

Asked in:  
Goldman Sachs
Facebook
Bloomberg
Microsoft
Given a binary tree, find its maximum depth.

The maximum depth of a binary tree is the number of nodes along the longest path from the root node down to the farthest leaf node.

 NOTE : The path has to end on a leaf node. 
Example :

         1
        /
       2
max depth = 2
*/

Solution:

Recursive
int Solution::maxDepth(TreeNode* A) 
{
  if(A==NULL) return 0;
  else return 1+max(maxDepth(A->left),maxDepth(A->right));
}

Iterative 
int Solution::maxDepth(TreeNode* A) 
{
  if(A==NULL) return 0;
  int d=0;
  queue<TreeNode*> q;
  q.push(A);
  while(A!=NULL)
  {
    int nodecount=q.size();
    if(nodecount==0) return d;
    d++;
    while(nodecount>0)
    {
      TreeNode* node=q.front();
      q.pop();
      if(node->left!=NULL) q.push(node->left);
      if(node->right!=NULL) q.push(node->right);
      nodecount--;
    }
  }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
