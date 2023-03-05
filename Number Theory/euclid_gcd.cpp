#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {//O(logn)
    if(a==0)return b;
    if(b==0)return a;
    if(a<b) swap(a,b);
    return gcd(a%b,b);

}
int main () {
    int a,b;
    cin >> a >> b;
    int lcm = (a*b)/__gcd(a,b);
    cout << lcm << endl;
    cout << __gcd(a,b) << endl;
    //cout << gcd(10,15) << endl;

}
// O(sqrt(n))
