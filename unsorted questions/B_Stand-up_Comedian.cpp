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

void solve()
{
    read(a1);
    read(a2);
    read(a3);
    read(a4);
    int a = a1, b = a1;
    int ans = a1;
    int jokes = a2 + a3 + a4;
    while (a != 0 && b != 0 && jokes > 0)
    {
        if(a2!=0 || b!=0){
            if (a2>b){
                a += b;
                ans += b;
                a2 -= b;
                jokes -= b;
                b = 0;
            }
            else {
                a += a2;
                b -= a2;
                ans += a2;
                jokes -= a2;
                a2 = 0;
            }
        }
        if(a3!=0 || a!=0){
            if (a3>a){
                b += a;
                ans += a;
                a3 -= a;
                jokes -= a;
                a = 0;
            }
            else {
                b += a3;
                a -= a3;
                ans += a3;
                jokes -= a3;
                a3 = 0;
            }
        }
        if(a4!=0 || b!=0 || a!=0){
            if (a>b){
                a -= b;
                jokes -= b;
                a4 -= b;
                ans += b;
                b = 0;
            }
            else
            {
                b -= a;
                jokes -= a;
                a4 -= a;
                ans += a;
                a = 0;
            }
        }
    }
    if (jokes > 0)
    cout << ans + 1<< endl;
    else
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