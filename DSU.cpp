#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e5 + 10;
int par[MAX],circle[MAX];
int Find(int x)
{
    if(par[x]== x)
    {
        return x;
    }
    par[x] = Find(par[x]);
    return par[x];

}
void Union(int u,int v)
{
    int repU = Find(u);
    int repV = Find(v);

    if(repU == repV)
    {
        printf("%d\n",circle[repU]);
    }
    else
    {
        circle[repU] += circle[repV];
        par[v] = u;
        printf("%d\n",circle[repU]);

    }
}
int32_t main()
{
    int u,v,tc,n,num;
    string s1,s2;
    map <string,int> mp;
    scanf("%d",&tc);

    while(tc-- && scanf("%d",&n)==1)
    {
        mp.clear();
        num = 1;
        for(int i=1; i<MAX; ++i)
        {
            par[i]=i;
            circle[i]=1;
        }
        for(int i=1; i<=n; ++i)
        {
            cin >> s1 >> s2;
            //scanf("%d %d",&u,&v);
            if(mp.find(s1)==mp.end())
            {
                mp[s1] = num++;
            }
            if(mp.find(s2)==mp.end())
            {
                mp[s2] = num++;
            }
            Union(mp[s1],mp[s2]);
        }
        // printf("%d",par[3]);
    }
}
