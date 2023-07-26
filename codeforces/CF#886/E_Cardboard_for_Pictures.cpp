#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

typedef long double ld;
typedef __int128_t bigint;

using namespace std;

istream &operator>>(istream &is, bigint &num)
{
    string str;
    is >> str;
    istringstream iss(str);
    iss >> num;
    return is;
}

void solve()
{
    int n;
    bigint k;
    cin >> n >> k;

    bigint sqsum = 0;
    bigint sum = 0;
    for (int i = 0; i < n; i++)
    {
        bigint x;
        cin >> x;
        sum += x;
        sqsum += x * x;
    }

    bigint a = 4 * n;
    bigint b = 2 * sum;
    bigint c = sqsum - k;

    bigint d = b * b - 4 * a * c;

    ld ans = static_cast<ld>(-b + sqrtl(static_cast<ld>(d))) / (2 * a);

    cout << fixed << setprecision(10) << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
