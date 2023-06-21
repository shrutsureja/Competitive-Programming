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
string check_subsequence_exists(int N, int B, vector<int>& A) {
    for (int i = 0; i < N; i++) {
        if ((A[i] & B) == B) {
            return "YES";
        }
    }
    return "NO";
}
void solve()
{
    read(N);
    readl(B);
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    string result = check_subsequence_exists(N, B, A);
    cout << result << endl;
    // bool checker = false;
    // for (int i = 0; i < (1 << n); i++){
    //     int av = -1;
    //     for (int j = 0; j < n; j++){
    //         if(i & (1 << j)){
    //             if(av == -1){
    //                 av = v[i];
    //             }else {
    //                 av &= v[i];
    //             }
    //         }

    //     }
    //     if(av == k){
    //         !checker;
    //         break;
    //     }
    // }
    // if(checker)
    //     yes;
    // else
    // no;
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