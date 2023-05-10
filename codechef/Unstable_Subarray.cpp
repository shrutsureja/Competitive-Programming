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

ll sum(vector<ll> v , int start, int end){
    if (start == end)
        return v[start];
    return v[end] - v[start] + 1;
}

void solve()
{
    read(n);
    readvl(v, n);
    map<ll ,ll> m;
    fr(n){
        m[v[i]]++;
    }
    ll ans = (n * (n - 1)) / 2;
    for(auto x : m){
        if(x.second>1){
            ans -= (x.second * (x.second - 1)) / 2;
        }
    }
    cout << ans << endl;
}

/*
6
1 2 6 1 1 2 
15 is normal answer

-1 -4 5 0 -1

-1 -5 0 0 1





1   2   3   4   5   6 
  -1  -1  -1  -1  -1 

6 - 1 = 5 and sum = 5 so it works 

v[end] - v[start] + 1 = 3  





stable pairs
1,3


unstable pairs
1,2



0 = 0
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