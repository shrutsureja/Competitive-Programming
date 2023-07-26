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
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define p(ans) cout << ans << endl
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;

void solve()
{
    // int MinCost(int n, int prices[], int dislike[])
    // {
        // Write Code Here

        read(n);
        int prices[n];
        int dislike[n];
        fr(n) cin >> prices[i];
        fr(n) cin >> dislike[i];
        if (n == 1)
        {
            p(-1);
            return;
            // return -1;
        }

        // paring prices and dislike together
        map<int, int> frndToPrice;
        for (int i = 0; i < n; i++)
        {
            if (frndToPrice.count(dislike[i])==0)
                frndToPrice[dislike[i]] = prices[i];
            else
            {
                int temp = frndToPrice.find(dislike[i])->second;
                frndToPrice.find(dislike[i])->second = temp > prices[i] ? prices[i] : temp;
            }
        }

        if(frndToPrice.size() == 1){
            p(-1);
            return;
        }
        int minCost1 = INT_MAX;
        int minCost2 = INT_MAX;

        for (auto &price : frndToPrice)
        {
            cout << price.first << " " << price.second << endl;
            if (minCost1 > price.second)
            {
                minCost2 = minCost1;
                minCost1 = price.second;
            }
            else {
                minCost2 = min(minCost2, price.second);
            }
        }
        p(minCost1 << " - 1 ");
        p(minCost2 << " - 2 ");
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