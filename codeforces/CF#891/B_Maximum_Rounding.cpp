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
// #define read(x) int x; cin >> x
#define readl(x) ll x; cin >> x
#define readvi(v,n) vector<int> v;fr(n){read(x);v.pb(x);}
#define readvl(v,n) vector<ll> v;fr(n){readl(x);v.pb(x);}
#define p(ans) cout << ans << endl
#define yes p("YES")
#define no p("NO")
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;

// string maxString(string a, string b)
// {
//   if (a.length() > b.length())
//     return a;
//   if (a.length() < b.length())
//     return b;
//   fr(a.length())
//   {
//     if ((a[i] - '0') < (b[i] - '0'))
//       return b;
//   }
//   return a;
// }

// string add(string s, string x){
//   string res = "";
//   if (x.length() > s.length()){
//     return x;
//   }
//   s = reverse 
//   for (int i = s.length(); i >= 0; i--){
//     if()
//   }
// }

string addStrings(string num1, string num2)
{
  int carry = 0;
  string result = "";

  int i = num1.size() - 1;
  int j = num2.size() - 1;

  while (i >= 0 || j >= 0 || carry > 0)
  {
    int digit1 = (i >= 0) ? num1[i] - '0' : 0;
    int digit2 = (j >= 0) ? num2[j] - '0' : 0;

    int sum = digit1 + digit2 + carry;
    carry = sum / 10;
    int digit = sum % 10;

    result = to_string(digit) + result;

    i--;
    j--;
  }

  return result;
}

string maxNumericString(string num1, string num2)
{
  int len1 = num1.size();
  int len2 = num2.size();

  if (len1 > len2)
    return num1;
  if (len1 < len2)
    return num2;

  for (int i = 0; i < len1; ++i)
  {
    if (num1[i] > num2[i])
      return num1;
    if (num1[i] < num2[i])
      return num2;
  }

  return num1; // Both strings are equal
}
void solve()
{
  string s;
  cin >> s;
  ll n = s.length();
  string res = s;
  string adder = "1";
  for (int i = s.length(); i >= 0; i--)
  {
    bool check = s[i] - '0' >= 5;
    s[i] = '0';
    if(check)//add
    {
      // p(s << "  + " << adder);
      s = addStrings(s, adder);
      // p("="<<s);
    }
    res = maxNumericString(s, res);
    adder += '0';
  }
  p(res);
  // p(maxNumericString("2000", "1980"));
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