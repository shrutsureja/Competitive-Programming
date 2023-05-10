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

bool check(ll n, ll m){
    if(m==n)
        return true;
    if (m > n || n % 2 != 0)
        return false;
    if (n == 2 * m)
    {
        return true; // Pile with exactly m gold nuggets can be created
    }
    if (check(n / 2, m) || check(n - m, m))
    {
        return true; 
    }
    return false;
}

bool canCreatePile(int n, int m)
{
    if (n == m)
    {
        return true; // Pile with exactly m gold nuggets already exists
    }
    if (n < m || n % 2 != 0 || m < 1)
    {
        return false; // Impossible to reach m gold nuggets
    }
    if (n == 2 * m)
    {
        return true; // Pile with exactly m gold nuggets can be created
    }

    // Recursive cases
    if (canCreatePile(n / 2, m) || canCreatePile(n - m, m))
    {
        return true; // Check if left sub-pile or right sub-pile can create m gold nuggets
    }

    return false; // Neither sub-pile can create m gold nuggets
}

void solve()
{
    readl(n);
    readl(m);
    canCreatePile(n, m) == true ? yes : no;
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