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
    read(n);
    read(k);
    if (k == 1 || k ==n) {
        fr(n) cout << i+1 << " ";
        cout << endl;
        return;
    }
    if (n%2==0)
        cout << n << " " << 1 << " ";
    else
        cout << n << " " << 1 << " " << (n + 1) / 2 << " ";
    for (int i = n / 2; i > 1; i--){
        cout << i  << " " << (n+1) -i << " ";
    }
    cout << endl;
}

/*
5 2  -> 6
5 1 3 2 4
5 1 
4 2
(5 - 2 - 1) 
5 3 

7 5
7 1 4 3 5 2 6 
--- n = even
8 1 
7 2
6 3
5 4

i = n/2
8 2
8 1 4 5 3 6 2 7
n,n-1,n - i, n-i+1,
--i

9 1 5 4 6 3 7 2 8 
9 1
8 2 
7 3     i = n/2 - > 4
6 4
 5


n, 1, .... , 2 ,n-2 
*/

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