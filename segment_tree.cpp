//on the name of Allah:)
#include<bits/stdc++.h>
#define int         long long
#define endl        "\n"
#define pi          2 * acos(0.0)
#define mod         1000000007
#define Mul(a,b)    (a%mod * b%mod)%mod
#define Add(a,b)    (a%mod + b%mod)%mod
#define all(x)      (x).begin(),(x).end()
#define allr(x)     (x).rbegin(),(x).rend()
#define gcd(x, y)   (__gcd(x, y))
#define lcm(x, y)   ((x/gcd(x, y))*y)
#define faster      cin.tie(NULL), cout.tie(NULL);
#define TC          int t ; cin>>t ; while (t--)
const int N = 1e9 + 7;
using namespace std;


void s()
{   
    int m;
    string n;
    cin >> m >> n;
    int pref[m];
    vector<int>v(m);
    for(int i=0;i<m;i++) {
        v[i] = n[i] = '0';
    }
    for(auto it:v) {
        cout << it << endl;
    }

}

int32_t main()
{   ios::sync_with_stdio(false);

    TC
    s();


}




