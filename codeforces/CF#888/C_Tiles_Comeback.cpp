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
void solve()
{
    read(n);
    read(k);
    vector<int> v(n);
    map<int, int> m;
    fr(n){
        cin >> v[i];
        m[v[i]]++;
    }
    if (k == 1 || (v[0] == v[n - 1] && m[v[0]] >= k) || n == 1 )
    {
        yes;
        return;
    }
    if(m[v[0]] < k || m[v[n-1]] < k){
        no;
        return;
    }
    int strtCount = 0;
    int lastCount = 0;
    int last = m[v[n - 1]];
    // cout<<last<<" "<<strt<<endl;
    fr(n){
        if(v[i] == v[n-1])lastCount++;
        if(v[i] == v[0] && strtCount < k){
            strtCount++;
            if (strtCount == k)
            {
                if(last - lastCount >= k){
                    yes;
                    return;
                }
                else{
                    no;
                    return;
                }
            }
        }
    }
    no;
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