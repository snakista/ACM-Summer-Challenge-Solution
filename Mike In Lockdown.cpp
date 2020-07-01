#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
       cin>>n;
       long long int A[n],i,B[n],C[n];
       for(i=0;i<n;i++)
       cin>>A[i];
       for(i=0;i<n;i++)
       cin>>B[i];
       for(i=0;i<n;i++)
       cin>>C[i];
       for(i=0;i<n;i++)
       {
           if(C[i]<(A[i]+B[i]))
           {
              sum+=((A[i]+B[i])-C[i]);
           }
       }
       cout<<sum<<endl;

    }
}
