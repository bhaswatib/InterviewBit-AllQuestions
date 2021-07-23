/*
Juggling Algorithm:
*/

int findgcd(int a, int b)
{   if(b==0) return a;
    if(a<b) swap(a,b);
    return findgcd(b,a%b);
}

int main()
{   int arr[]={1,2,3,4,5,6};
    int d=2;
    int n=6;
    int gcd=findgcd(d,n);
    cout<<gcd<<endl;
    for(int i=0;i<gcd;i++)
    {
        int temp=arr[i];
        int j=i;
        while(1)
        {
            int k=(j+d)%n;
            if(k==i) break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


In Case Of Vectors:

vector<int> rotatearray(vector<int> &A, int d)
{   int n=A.size();
    vector<int> res;
    for(int i=0;i<n;i++) res.push_back(A[(i+d)%n];
    return res;
}
