/*
Binary Representation

Given a number N >= 0, find its representation in binary.

Example:

if N = 6,

binary form = 110
*/

Solution:
string Solution::findDigitsInBinary(int A) 
{
    if(A==0 || A==1) return to_string(A);
    string res="";
    while(A)
    {
        int digit=A%2;
        res=to_string(digit)+res;
        A=A/2;
    }
    return res;
}














