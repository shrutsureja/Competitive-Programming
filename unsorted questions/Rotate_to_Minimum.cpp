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

char type1(char x){
    if(x=='z')
        return 'a';
    return (char)((int)x + 1);
}

char type2(char x){
    if(x=='a')
        return 'z';
    return (char)((int)x - 1);
}

/*

 x-'a' = d1
|x-'z'| = d2

a - 97 

p - 112

10

z - 122


take least distance since its add check if p >= d2 otherwise do q 
*/
void solve()
{
    read(n);
    read(p);
    read(q);
    string s;
    cin >> s;
    int i = 0;

    while(p+q!=0 && i < n)
    {
        char x = s[i];
        if (x=='a'){
            i++;
            continue;
        }
        int d1 = x-'a';
        int d2 = abs(x - 'z') + 1;
        if (p >= d2)
        {
            // do type 1 opp
            p-=d2;
            s[i] = 'a';
            i++;
        }
        else {
            // do type 2 opp
            if(q>0){
                q--;
                s[i] = type2(s[i]);
            }
            else {
                i++;
            }
        }
    }
    cout << s << endl;
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
        // cout << "Case #" << ": ";
    // fr(t){
    //     cout << "Case #" << i + 1 << ": ";
    //     solve();
    //     cout << endl;
    // }
    return 0;
}