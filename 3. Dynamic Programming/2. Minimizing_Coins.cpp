#include <bits/stdc++.h>
using namespace std;

int dp[1000010];

int solve(vector<int> &c, int x)
{
    if (x == 0)
        return 0;
    if (dp[x] != -1)
        return dp[x];
    int ans = 1e6 + 10;
    for (auto &coin : c)
        if ((x - coin) >= 0)
            ans = min(ans, 1 + solve(c, x - coin));
    return dp[x] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    int res = solve(c, x);
    cout << (res > 1e6 ? -1 : res);
    return 0;
}