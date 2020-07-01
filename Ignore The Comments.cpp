#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<char> v;
        v.push_back('/');
        ll cnt=0;
        for(ll i=0;i<s.length();)
        {
            if(i==s.length()-1)
            {
                v.push_back('/');
                break;
            }
            if(s[i]=='/'&&s[i+1]=='/')
            {
                 i+=2;
                 while(s[i]!='/'&&i<s.length())
                 i++;
                 ll j,f=0;
                 for(j=v.size()-2;v[j]!='/'&&j>=0;j--)
                 {
                     f=1;
                     v[j]='/';
                 }
                 if(f==1)
                 cnt--;
            }
            else if(s[i]=='/'&&s[i+1]!='/')
            {
                i++;
                cnt++;
                while(s[i]!='/'&&i<s.length())
                {
                v.push_back(s[i]);
                i++;
                }
                v.push_back('/');
            }
        }
        cout<<cnt<<endl;
        for(ll i=0;i<v.size();)
        {
            if(v[i]=='/')
            i++;
            else{
                while(v[i]!='/')
                {
                    cout<<v[i];
                    i++;
                }
                cout<<endl;
            }
        }
    }
}
