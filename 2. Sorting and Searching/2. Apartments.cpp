#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

main()
{
    Fast_IO int n, m, k, res = 0;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0, j = 0; i < n && j < m; i++)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            res++;
            j++;
        }
        else if (b[j] - a[i] > k)
            continue;
        else
        {
            i--;
            j++;
        }
    }
    cout << res;
    return 0;
}