// this was very simple problem based on implementation and maths
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
       float x,y;
       float l,r,a;
       cin>>x>>y>>a;
       l=pow(x,2);
       r=(4*a*y);
       if(l==r)
       cout<<"YES"<<endl;
       else 
       cout<<"NO"<<endl;
    }
}
