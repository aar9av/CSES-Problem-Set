#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int dp[1000010];

int cnt(vector<int> &c, int sum)
{
    if (sum == 0)
        return 1;
    if (dp[sum] != -1)
        return dp[sum];
    long long res = 0;
    for (auto &it : c)
        if (sum - it >= 0)
            res = (res + cnt(c, sum - it)) % mod;
    return dp[sum] = res % mod;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    cout << cnt(c, x);
    return 0;
}
