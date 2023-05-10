#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <cmath>

typedef long double ld;

#define fr(n) for (int i = 0; i < n; i++)
#define freq1(n) for (int i = 1; i <= n; i++)
#define freq(n) for (int i = 0; i <= n; i++)
#define fra(a, n) for (int i = a; i < n; i++)
#define ll long long int
#define endl "\n"
#define pb push_back
#define read(x) int x; cin >> x
#define readl(x) ll x; cin >> x
#define readvi(v,n) vector<int> v;fr(n){read(x);v.pb(x);}
#define readvl(v,n) vector<ll> v;fr(n){readl(x);v.pb(x);}
#define yes cout << "YES\n"
#define no cout << "NO\n"
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;
/*      z   o   
11111   0   5
11101   1   4
-----
10000

0011    2   2
1110    1   3

min (a-0 , b-1) + min(a-1,b-0) = 3 -> so 3 ones and rest zero



*/
void solve()
{
    string a;
    cin >> a;
    string b;
    cin >> b;
    ll n = a.length();
    ll a0=0;
    ll a1=0;
    ll b0=0;
    ll b1=0;
    fr(n){
        if (a[i]=='0')
            a0++;
        else
            a1++;
        if (b[i]=='0')
            b0++;
        else
            b1++;
    }
    ll n1 = min(a0, b1) + min(a1, b0);
    string ans="";
    fr(n)
    {
        if(n1-->0){
            ans += '1';
        }
        else
            ans += '0';
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // fr(t){
    //     cout << "Case #" << i + 1 << ": ";
    //     solve();
    //     cout << endl;
    // }
    return 0;
}