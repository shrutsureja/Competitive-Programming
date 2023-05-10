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
#define read(x) \
    int x;      \
    cin >> x
#define readl(x) \
    ll x;        \
    cin >> x
#define readvi(v, n) \
    vector<int> v;   \
    fr(n)            \
    {                \
        read(x);     \
        v.pb(x);     \
    }
#define readvl(v, n) \
    vector<ll> v;    \
    fr(n)            \
    {                \
        readl(x);    \
        v.pb(x);     \
    }
#define yes cout << "YES\n"
#define no cout << "NO\n"
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;

void solve()
{
    readl(n);
    vector<ll> v;
    ll tone = 0;
    ll tzero = 0;
    ll one = 0;
    ll zero = 0;
    fr(n)
    {
        readl(x);
        v.pb(x);
        if (x == 1)
        {
            tone++;
        }
        else
            tzero++;
    }
    zero = tzero;
    one = tone;
    ll a1 = 0;
    ll a2 = 0;
    ll a3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            // cout << a1 << " = a1" << endl;
            a1 += zero;
            a2 += zero;
            if (one == 1)
            {
                a3 += tone - one;
            }
            else
            {
                a3 += zero;
            }
            one--;
        }
        else
        {
            if (zero==tzero){
                a2 += (--zero) - (tone - one);
            }else 
            zero--;
        }
    }
    // cout << "a1= " << a1 << " a2 = " << a2 << " a3 = " << a3 << endl;
    cout << max(a1, max(a2, a3)) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);
    int t = 1;
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