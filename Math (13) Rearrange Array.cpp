/*
Rearrange Array
Asked in:  
Facebook
Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

Example:

Input : [1, 0]
Return : [0, 1]
 Lets say N = size of the array. Then, following holds true :
1. All elements in the array are in the range [0, N-1]
2. N * N does not overflow for a signed integer.
*/

Solution:
void Solution::arrange(vector<int> &A) 
{
  int n=A.size();
  for(int i=0;i<n;i++)
  {
    A[i]=A[i]+((A[A[i]]%n)*n);
  }
  for(int i=0;i<n;i++)
  {
    A[i]=A[i]/n;
  }
}

















