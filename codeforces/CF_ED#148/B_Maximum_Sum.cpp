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
#define sortv(v) sort(v.begin(), v.end())
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;
//
// NOT SOLVED
//
void solve()
{
    readl(n);
    readl(k);
    readvl(v, n);
    sortv(v);
    ll fptr = 0;
    ll eptr = n - 1;
    fr(k)
    {
        if(v[fptr] + v[fptr+1] < v[eptr])
            fptr += 2;
        else {
            eptr--;
        }
    }
    ll ans = 0;
    for (int i = fptr; i <= eptr; i++){
        ans += v[i];
    }
    ll ans1 = 0;
    fr(n-k){
        ans1 += v[i];
    }
    ll ans2 = 0;
    for (int i = 2 * k; i < n; i++)
    {
        ans2 += v[i];
    }
    // cout << ans1 << " " << ans2 << endl;
    cout << max(ans, max(ans1 , ans2)) << endl;
}

/*
15 22 12 10 13 11

15 22 12 10 13 11

10 11 12 13 15 22
0  1  2  3 
k = 2

12 13 15
*/

int main()
{
// #ifndef ONLINE_JUDGE

//     // For getting input from input.txt file
//     freopen("input.txt", "r", stdin);

//     // Printing the Output to output.txt file
//     freopen("output.txt", "w", stdout);

// #endif
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