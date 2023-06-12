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

bool checkPal(string S){
    string P = S;

    // Reverse the string P
    reverse(P.begin(), P.end());

    // If S is equal to P
    if (S == P)
    {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else
    {
        // return "No"
        return false;
    }
}

void solve()
{
    read(n);
    readvl(v,n);
    int ans = n;
    fr(n)
    {
        for(int j = i + 1; j < n;j++){
            if(v[i] == v[j] || (v[i]^v[j]) <= 9){
                ans++;
                // cout << v[i] << " " << v[j] << " " << (v[i] ^ v[j]) << endl;
            }
            else if (checkPal(to_string(v[i] ^ v[j])))
                ans++;
        }
    }
    cout << ans << endl;
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