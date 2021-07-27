/*
Next Smallest Palindrome!

Asked in:  
Google
grofers
Problem Description

Given a numeric string A representing a large number you need to find the next smallest palindrome greater than this number.



Problem Constraints
1 <= |A| <= 100

A doesn't start with zeroes and always contain digits from 0-9.



Input Format
First and only argument is an string A.



Output Format
Return a numeric string denoting the next smallest palindrome greater than A.



Example Input
Input 1:

 A = "23545"
Input 2:

 A = "999"


Example Output
Output 1:

 "23632"
Output 2:

 "1001"
*/

Solution:
string Solution::solve(string A) 
{
  int n=A.size();
  int mid=(n+1)/2;
  bool inc=true;
  for(int i=mid;i<n;i++)
  {
    if(A[n-i-1]==A[i]) continue;
    if(A[n-i-1]<A[i]) inc=true;
    if(A[n-i-1]>A[i]) inc=false;
    break;
  }
  A=A.substr(0,mid);
  if(inc)
  {
    int carry=1;
    for(int i=mid-1;i>=0 && carry==1;i--)
    {
      A[i]=(A[i]=='9'?'0':A[i]+carry--);
    }
    if(carry)
    {
      return '1'+string(n-1,'0')+'1';
    }
  }
  for(int i=n-A.size()-1;i>=0;i--)
  {
    A.push_back(A[i]);
  }
  return A;
}




























