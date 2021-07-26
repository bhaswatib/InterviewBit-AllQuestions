/*
All Factors

Given a number N, find all factors of N.

Example:

N = 6 
factors = {1, 2, 3, 6}
Make sure the returned array is sorted.
*/

Solution:
vector<int> Solution::allFactors(int A) 
{
  vector<int> res;
  for(int i=1;i*i<=A;i++)
  {
    if(A%i==0)
    {
      if((A/i)==i) res.push_back(i);
      else 
      {
        res.push_back(i);
        res.push_back(A/i);
      }
    }
  }
  sort(res.begin(),res.end());
  return res;
}














