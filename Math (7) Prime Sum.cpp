/*
Prime Sum
Asked in:  
Epic systems
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d] 

If a < c OR a==c AND b < d. 
*/

Solution:
vector<int> Solution::primesum(int A) 
{
  vector<int> res;
  vector<bool> isprime(A+1,true);
  isprime[0]=false;
  isprime[1]=false;
  for(int i=2;i<=A;i++)
  {
    if(isprime[i])
    {
      for(int j=i*2;j<=A;j=j+i) isprime[j]=false;
    }
  }
  for(int i=2;i<=A;i++)
  {
    if(isprime[i])
    {
      if(isprime[A-i])
      {
        res.push_back(i);
        res.push_back(A-i);
        break;
      }
    }
  }
  return res;
}
      














