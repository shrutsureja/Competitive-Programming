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
    readl(k);
    readvl(v, n);
    int checker = v.size();
    if(checker < k){
        cout << 0 << endl;
        return;
    }
    sort(v.rbegin() , v.rend());
    int ptr = k - 1;
    int ans = 0;
    while (checker >= k && ptr < v.size())
    {
        int zero = 0;
        ans += v[ptr];
        // cout << v[ptr] << " ";
        for (int i = 0; i <= ptr; i++)
        {
            v[i] -= v[ptr];
            if (v[i] == 0)
            {
                zero++;
            }
        }
        checker -= zero;
        sort(v.rbegin(), v.rend());
    }
    cout << ans << endl;
}
/* 
||
5 3
1 2 4 5 9
1 2 3 4 8
1 2 2 3 7
1 2 1 2 6
1 2 0 1 5
0 1 1 2 5
0 0 1 1 4


1 1 0 1 4
1 0 0 0 3

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