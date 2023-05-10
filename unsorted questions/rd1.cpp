/*
Given an array of integers and a positive integer k , determine the number of (i, j) pairs where i<j and arr[i] + arr[j] is divisible by k.

Function Description
int n: the length of array
int arr[n]: an array of integers
int k: the integer divisor

Constraints
2 <= n <= 100
1 <= k <=100
1 <= arr[i] <=100

Example

Input:
n = 6
k = 3
arr = [1, 3, 2, 6, 1, 2]

Output:
5

Explanation
Here are the 5 valid pairs when k = 3:
(0,2) -> arr[0] + arr[2] = 1 + 2 = 3
(0,5) -> arr[0] + arr[5] = 1 + 2 = 3
(1,3) -> arr[1] + arr[3] = 3 + 6 = 9
(2,4) -> arr[2] + arr[4] = 2 + 1 = 3
(4,5) -> arr[4] + arr[5] = 1 + 2 = 3
*/

#include <bits/stdc++.h>

using namespace std;
inline int pairs(int n){
    return (n * (n - 1)) / 2;
}

int main()
{
// #ifndef ONLINE_JUDGE

//     // For getting input from input.txt file
//     freopen("input.txt", "r", stdin);

//     // Printing the Output to output.txt file
//     freopen("output.txt", "w", stdout);

// #endif
    int n;
    int k;
    map<int,int> m;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        m[x % k]++;
    }
    int ans = 0;
    for (int i = 0; i <= k / 2;i++){
        if (i == k-i || i==0){
            if(m.count(i))
                ans += pairs(m[i]);
        }
        else {
            if (m.count(i) && m.count(k-i))
                ans += (m[i] * m[k - i]);
        }
    }
    cout << ans << endl;
    return 0;
}