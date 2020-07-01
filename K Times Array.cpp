#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    //sort(arr,arr+n);
    ll i,j,cnt=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            cnt++;
            cnt=cnt%1000000007;
        }
    }
    cnt=cnt*k;
    ll p=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            p++;
            p=p%1000000007;
        }
    }
    ll f;
    ll u;
    if(k!=1)
    f=(k*(k-1))/2;
    f=f%1000000007;
    if(k==1)
    f=0;
    u=p*f;
    cnt=cnt+u;
    if(cnt==0)
    cout<<0<<endl;
    else
    {
        ll res=(cnt%1000000007);
        cout<<res<<endl;
    }
    //cout<<cnt%1000000007<<endl;
}
