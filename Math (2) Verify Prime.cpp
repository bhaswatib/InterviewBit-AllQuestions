/*
Verify Prime

Given a number N, verify if N is prime or not.

Return 1 if N is prime, else return 0.

Example :

Input : 7
Output : True
*/

Solution:
int Solution::isPrime(int A) 
{
  if(A==1) return 0;
  else if(A==2 || A==3) return 1;
  else if(A%2==0 || A%3==0) return 0;
  else
  {
    for(int i=5;i*i<=A;i=i+6)
    {
      if(A%i==0 || A%(i+2)==0) return 0;
    }
    return 1;
  }
}
  














