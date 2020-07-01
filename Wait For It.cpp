#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,a,b,c,d;
    cin>>t;
    while(t--)
    {
       ll res=0;
       cin>>a>>b>>c>>d;
       ll min=b;
       if(c<min)
       min=c;
       if(d<min)
       min=d;
       res=min;

       b=b-min;

       min=a;
       if(b<min)
       min=b;
       res+=min;
       cout<<res<<endl;
    }
}
