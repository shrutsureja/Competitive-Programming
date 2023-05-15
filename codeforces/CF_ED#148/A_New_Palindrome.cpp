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
A palindrome is a string that reads the same from left to right as from right to left. For example, abacaba, aaaa, abba, racecar are palindromes.

You are given a string s
 consisting of lowercase Latin letters. The string s
 is a palindrome.

You have to check whether it is possible to rearrange the letters in it to get another palindrome (not equal to the given string s
).

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The only line of each test case contains a string s
 (2≤|s|≤50
) consisting of lowercase Latin letters. This string is a palindrome.

Output
For each test case, print YES if it is possible to rearrange the letters in the given string to get another palindrome. Otherwise, print NO.

You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).
*/

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    map<char, int> mp;
    fr(n){
        mp[s[i]]++;
    }
    int even = 0;
    int odd = 0;
    for (auto x : mp)
    {
        if(x.second%2==0)
            even++;
        else
            odd++;
    }
    if (n%2==0 && odd)
        no;
    else{
        if(mp.size()==1)
            no;
        else{
            if(even == 1 && odd == 1){
                string ss = s;
                char a, b;
                for (auto x : mp)
                    if(x.second%2==0)
                        a = x.first;
                    else
                        b = x.first;
                fr(n){
                    if (i == (n / 2))
                        ss[i] = b;
                    else
                        ss[i] = a;
                }
                // cout << ss;
                if (ss == s)
                {
                    no;
                }
                else
                    yes;
            }else
                yes;
        }
    }
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