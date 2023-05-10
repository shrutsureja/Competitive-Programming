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

void showpq(priority_queue<int, vector<int>, greater<int>> gq)
{
    priority_queue<int , vector<int>,greater<int>> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}
void solve()
{
    read(n);
    read(m);
    priority_queue<int , vector<int> , greater<int>> a;
    // priority_queue<int> b;
    fr (n){
        read(x);
        a.push(x);
    }
    fr (m){
        read(x);
        showpq(a);
        a.pop();
        a.push(x);
        showpq(a);
    }
    ll sum = 0;
    while (!a.empty()){
        sum += a.top();
        a.pop();
    }
    cout << sum << endl;
    // vector<ll> a(n + m);
    // fr(n + m) cin >> a[i];

    // sort(a.begin(), a.end() - 1);
    // reverse(a.begin(), a.end());

    // ll ans = 0;
    // fr(n) {
    //     ans += a[i];
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // cout << ans << endl;
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