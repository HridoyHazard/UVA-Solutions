#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll bajok; // jake diye bag kora hoy
    string bajjo; //jake bag kore
    ll bagshes=0,i;
    cin>>bajok>>bajjo;
    ll len=bajjo.size();
    for(i=0;i<len;i++)
    {
        bagshes=((bagshes*10)+(bajjo[i]-'0'))%bajok;
    }
    cout<<bagshes<<endl;

    return 0;
}
