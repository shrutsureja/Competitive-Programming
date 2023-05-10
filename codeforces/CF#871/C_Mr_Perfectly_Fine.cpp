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
    read(n);
    int ans = -1;
    int a1 = INT_MAX;
    int a2 = INT_MAX;
    int a3 = INT_MAX;
    bool b1 = false;
    bool b2 = false;
    bool b3 = false;
        fr(n)
        {
            read(x);
            string s;
            cin >> s;
            if(s=="10"){
                a1 = min(a1, x);
                b1 = true;
            }
            if(s=="01"){
                a2 = min(a2, x);
                b2 = true;
            }
            if(s=="11"){
                a3 = min(a3, x);
                b3 = true;
            }
        }
    if(b1 && b2){
            if (b3)
            {
                ans = min(a3, a1 + a2);
            }
        else
            ans = a1 + a2;
    }
    else {
        // cout << "shrut" << endl;
        if(b3)
            ans = a3;
    }
    cout << ans << endl;
}

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