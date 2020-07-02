#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long int xax[8]={-1,-1,-1,0,1,1,1,0};
    long int yax[8]={-1,0,1,1,1,0,-1,-1};
    long int t,m,n,i,j,sum,flag,X,Y;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
         long int mat[m][n];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>mat[i][j];
            }
        }
        sum=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                flag=0;
                if(mat[i][j]==0)
                continue;
                for( long int k=0;k<8;k++)
                {
                    X=i+xax[k];
                    Y=j+yax[k];
                    if(X<0||Y<0||X>=m||Y>=n)
                    continue;
                    if(mat[X][Y]>mat[i][j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                sum+=mat[i][j];
            }
        }
        cout<<sum<<'\n';
    }
}
