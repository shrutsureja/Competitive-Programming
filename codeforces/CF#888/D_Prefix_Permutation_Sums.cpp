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
    readl(n);
    readvl(v,n-1);
    vector<ll> temp = v;
    map<ll, ll> m;
    m[temp[0]]++;
    fe(1, n - 1)
    {
        temp[i] = v[i] - v[i-1];
        if (temp[i] > 2 * n - 1)
        {
            no;
            return;
        }
        m[temp[i]]++;
        if(m[temp[i]] > 3){
            no;
            return;
        }
    }
    // fr(temp.size()){
    //     cout << temp[i] << " ";
    // }
    // p("");
    vector<ll> missNo;
    freq(1, n){
        if(m[i] == 0)missNo.pb(i);
        else {
            m[i]--;
        }
    }
    // for(auto x  : m){
    //     cout << x.first << " " << x.second << endl;
    // }
    // p("");
    if(missNo.size() == 1){
        yes;
        return;
    }
    if(missNo.size() > 2){
        // p("here");
        no;
        return;
    }
    if(m[missNo[0] + missNo[1]] == 1){
        yes;
        return;
    }
        // p("here last");
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