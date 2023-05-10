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
    read(N);
    int p = 0;
    int n = 0;
    fr(N){
        int x;
        cin >> x;
        if (x>0)p++;
        else
            n++;
    }
    int tp = p;
    int ans = 0;
    fr(N)
    {
        if(tp>0){
            cout << ++ans << " ";
            tp--;
        }
        else {
            if (ans > 0)
                ans--;
            cout << ans << " ";
        }
    }
    cout << endl;
    ans = 0;
    fr(N)
    {
        if(p>0){
            cout << ++ans << " ";
            p--;
            if (n > 0 ){
                cout << --ans << " ";
                i++;
                n--;
            }
        }
        else {
            cout << (ans > 0) ? --ans : 0;
            cout << " ";
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