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
    read(md);
    map<int, int> m;
    vector<vector<int>> v;
    vector<int> ans;
    for (int k = 0; k < md; k++)
    {
        // cout << "check" << endl;
        read(n);
        readvi(a,n);
        try
        {
            
            fr(n){
                m[a[i]]++;
            }
            /* code */
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        v.push_back(a);
    }
    for (int k = 0; k < md;k++)
    {
        int checker = false;
        fr(v[k].size())
        {
            if(m[v[k][i]] == 1 && checker == false){
                checker = true;
                ans.pb(v[k][i]);
            }
            m[v[k][i]]--;
        }
        if (checker==false){
            cout << -1 << endl;
            return;
        }
    }
    fr(ans.size()){
        cout << ans[i] << " ";
    }
    cout << endl;
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