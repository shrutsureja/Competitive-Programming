#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <cmath>

typedef long double ld;

#define fr(n) for (int i = 0; i < n; i++)
#define fe(x,n) for (int i = x; i < n; i++)
#define freq(x,n) for (int i = x; i <= n; i++)
#define ll long long int
#define endl "\n"
#define pb push_back
#define read(x) int x; cin >> x
#define readl(x) ll x; cin >> x
#define readvi(v,n) vector<int> v;fr(n){read(x);v.pb(x);}
#define readvl(v,n) vector<ll> v;fr(n){readl(x);v.pb(x);}
#define p(ans) cout << ans << endl
#define yes p("YES")
#define no p("NO")
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;

void solve()
{
    read(n);
    bool checker = true;
    vector<int> v(n);
    fr(n){
        cin >> v[i];
        if(i > 0 && v[i] < v[i-1])
            checker = false;
    }
    if(!checker){
        p(0);
        return;
    }
    int ans = 0;
    int minDiff = INT_MAX;
    fe(1,n){
        minDiff = min(minDiff,(v[i] - v[i-1]));
        minDiff = abs(minDiff);
    }
    if(minDiff == 0){
        p(1);
        return;
    }
    if(minDiff%2==0) p((minDiff/2) + 1);
    else p((minDiff + 1) / 2);
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