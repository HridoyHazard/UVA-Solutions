#include<bits/stdc++.h>
using namespace std;
//Welcome To Hridoy's Code
#define   ll                  long long
#define   ull                 unsigned long long
#define   pb                  push_back
#define   em                  emplace_back
#define   ff                  first
#define   ss                  second
#define   endl                "\n"
#define   all(v)              (v.begin(), v.end())
#define   rall(v)             (v.rbegin(), v.rend())
#define   pi                  acos(-1.0)
#define   LCM(LCM_X,LCM_Y)    (LCM_X/__gcd(LCM_X,LCM_Y))*LCM_Y
#define   FastRead   ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int wt[12345],val[12345];
int kp(int val[],int wt[],int n,int w)
{
    int i,j;
    int k[w+1];
    memset(k,0,sizeof(k));
    for(i=0; i<n; i++)
    {
        for(j=w; j>=wt[i]; j--)
        {
            k[j]=max(k[j],val[i]+k[j-wt[i]]);
        }
    }
    return k[w];
}
int main()
{
    FastRead
    int t;
    cin>>t;
    while(t--)
    {
        memset(val,0,sizeof(val));
        memset(wt,0,sizeof(wt));
        int n,m,i,temp, bodda=0;;
        cin>>n>>m;
        temp=n;
        while(temp--)
        {


           ll p,sum=0;
           cin>>p;
           for(i=0;i<p;i++)
           {
               ll o;
               cin>>o;
               sum+=o;
           }
           val[i]=sum;
           wt[i]=sum;
        }
     cout<<kp(val,wt,n,m)<<endl;


    }

    return 0;
}
