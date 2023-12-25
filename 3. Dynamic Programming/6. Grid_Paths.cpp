#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
int n;
int dp[1010][1010];
int mod = 1e9 + 7;

int solve(int x, int y)
{
    if (x == n || y == n)
        return 0;
    if (grid[x][y] == '*')
        return 0;
    if (x == n - 1 && y == n - 1)
        return 1;
    if (dp[x][y] != -1)
        return dp[x][y];
    long long res = (solve(x + 1, y) + solve(x, y + 1)) % mod;
    return dp[x][y] = res;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        grid.push_back(t);
    }
    cout << solve(0, 0);
    return 0;
}