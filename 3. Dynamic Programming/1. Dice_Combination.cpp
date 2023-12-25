#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int dp[1000010];

int cnt(int sum)
{
    if (sum == 0)
        return 1;
    if (dp[sum] != -1)
        return dp[sum];
    long long res = 0;
    for (int i = 1; i <= 6 && sum - i >= 0; i++)
        res = (res + cnt(sum - i)) % mod;
    return dp[sum] = res % mod;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int sum;
    cin >> sum;
    cout << cnt(sum);
    return 0;
}