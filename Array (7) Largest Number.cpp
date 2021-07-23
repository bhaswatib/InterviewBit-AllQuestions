/*
Largest Number

Asked in:  
Amazon
Goldman Sachs
Microsoft
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.
*/

Solution:
 
static bool mycomp(string x, string y)
{   return x+y > y+x;
}
string Solution::largestNumber(const vector<int> &A) 
{   int n=A.size();
    string res="";
    vector<string> str;
    for(int i=0;i<n;i++)
    {   str.push_back(to_string(A[i]));
    }
    sort(str.begin(),str.end(),mycomp);
    for(int i=0;i<n;i++)
    {   res+=str[i];
    }
    int s=res.length();
    int count=0;
    for(int i=0;i<s;i++)
    {   if(res[i]=='0') count++;
    }
    if(count==s) res='0';
    return res;
}
