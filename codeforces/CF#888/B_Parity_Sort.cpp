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
//solved

/*
same logic and better in space complexity solution:

by tourist

    auto b = a;
    sort(b.begin(), b.end());
    bool ok = true;
    for (int i = 0; i < n; i++) {
      ok &= (a[i] % 2 == b[i] % 2);
    }
    cout << (ok ? "YES" : "NO") << '\n';

 */
void solve()
{
    readl(n);
    vector<ll> v(n);
    int even = 0;
    vector<bool> positionChecker(n, false);//if true, then even
    fr(n){
        cin >> v[i];
        if(v[i]%2==0){
            even++;
            positionChecker[i] = true;
        }
    }
    if(even == 0 || even == n){
        yes;
        return;
    }    
    sort(v.begin(), v.end());
    fr(n){
        bool check = v[i] % 2 == 0;//if true then even
        if(check != positionChecker[i]){
            no;
            return;
        }
    }
    yes;
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