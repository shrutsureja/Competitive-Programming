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
    readl(n);
    string s;
    cin >> s;
    ll o = 0, z = 0;
    fr(2 * n)
    {
        if (s[i]=='0')
            z++;
        else
            o++;
    }
    if (z==0 || o==0) {
        cout << -1 <<endl;
        return;
    }
    if (z>=o){
        int counter=0;
        fr(2 * n)
        {
            if(s[i]=='0' && counter <n){
                cout << i + 1 << " ";
                counter++;
            }
        }
        cout << endl;
        return;
    }
    int counter = 0;
    fr(2 * n)
    {
        if (s[i] == '1' && counter<n)
        {
            cout << i + 1 << " ";
            counter++;
        }
    }
        cout << endl;
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