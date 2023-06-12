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
/* 
even + even = even
odd + odd = even
even + odd = odd
no of odd in till that number from 1 
edge

no. of odd == od 
if od == k then yes
od < k then no

od > k 
    x = od - k
    x&1 --> no
    else yes
 every subset minimum 2 intergers
 
 */
void solve()
{
    readl(n);
    readl(k);
    if (k*2 > n){
        no;
        return;
    }
    ll odd = (n + 1) / 2;
    ll res = odd - k + 1;
    if (res % 2 != 0)
        yes;
    else
        no;
    // ll od = 0;
    // if (n & 1)
    //     od = (n * (n + 1)) / 2;
    // else
    //     od = n / 2;
    // if(od == k )
    //     yes;
    // else if(od < k)
    //     no;
    // else {
    //     ll x = od - k;
    //     if(x & 1) // x -> odd
    //         no;
    //     else
    //         yes;
    // }

    // if ((od - k  +1) % 2 == 1)
    // {
    //     yes;
    // }
    // else
    // {
    //     no;
    // }
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