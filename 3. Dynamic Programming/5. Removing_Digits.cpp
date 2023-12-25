#include <bits/stdc++.h>
using namespace std;

int dp[1000010];

int solve(int n)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    vector<int> dgt;
    int num = n;
    while (num)
    {
        if (num % 10)
            dgt.push_back(num % 10);
        num /= 10;
    }
    int res = INT_MAX;
    for (auto it : dgt)
        res = min(res, solve(n - it) + 1);
    return dp[n] = res;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}