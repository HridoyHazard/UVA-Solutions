#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,m;
    cin>>n>>m;
    int path[100][100];
    for (int i = 0; i < n; ++ i)
    {
        for (int j = 0; j < n; ++ j)
            path[i][j] = 101;
        path[i][i] = 0;
    }
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        path[u][v]=path[v][u]=1;
    }
    for(k=0; k<n; k++)
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                path[i][j]=min(path[i][j],path[i][k]+path[k][j]);
            }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }

}
