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
#define p(ans) cout << ans << endl
#define yes p("YES")
#define no p("NO")
#define sortv(v) sort(v.begin(), v.end());
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;

ll closestToLeft(const vector<ll> v, ll y){
  ll l = -1,r = v.size(),m,res= -1;
  while(l <= r){
    m = (l + r) / 2;
    if(v[m]<=y){
      res = m;
      l = m + 1;
    }
    else {
      r = m - 1;
    }
  }
  return res==-1 ? v.size() : res;
}
ll closestToRight(const vector<ll> v, ll x){
  ll l = -1,r = v.size(),m,res= -1;
  while(l <= r){
    m = (l + r) / 2;
    if(v[m]<x){
      l = m + 1;
    }
    else {
      res = m;
      r = m - 1;
    }
  }
  return res;
}

void solve()
{
  readl(n);
  readvl(v, n);
  sortv(v);
  readl(k);
  fr(k){
    readl(x);
    readl(y);
    cout << closestToLeft(v, y) - closestToRight(v, x) +1 << " ";
  }
  cout << "\n";
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  solve();
  return 0;
}
