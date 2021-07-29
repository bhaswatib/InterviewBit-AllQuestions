/*
Sum Root to Leaf Numbers

Asked in:  
Google
Microsoft
Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.

An example is the root-to-leaf path 1->2->3 which represents the number 123.

Find the total sum of all root-to-leaf numbers % 1003.

Example :

    1
   / \
  2   3
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.

Return the sum = (12 + 13) % 1003 = 25 % 1003 = 25.
*/

Solution:
int mod=1003;
void findnumber(TreeNode* A, int value, int &sum)
{
  if(A==NULL) return;
  value=value % mod;
  if(A->left==NULL && A->right==NULL) sum=(sum+(value*10+A->val)%mod)%mod;
  findnumber(A->left,value*10+A->val,sum);
  findnumber(A->right,value*10+A->val,sum);  
}
int Solution::sumNumbers(TreeNode* A) 
{
  int sum=0;
  findnumber(A,0,sum);
  return sum;
}



















