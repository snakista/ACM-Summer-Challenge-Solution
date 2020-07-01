#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   ll n,k,sum=0,cnt=0;
   cin>>n>>k;
   ll t[n];
   ll beh[n];
   for(ll i=0;i<n;i++)
   {
   cin>>t[i];
   }
   for(ll i=0;i<n;i++)
   cin>>beh[i];
   for(ll i=0;i<n;i++)
   {
      if(beh[i]==1)
      sum+=t[i];
      else if(beh[i]==0)
      {
         ll a=i,b=i+k-1,temp=0;
         for(ll j=a;j<=b&&j<n;j++)
         {
             if(beh[j]==0)
             {
                temp+=t[j];
             }
         }
         cnt=max(cnt,temp);
      }
   }
   sum+=cnt;
   cout<<sum;
}
