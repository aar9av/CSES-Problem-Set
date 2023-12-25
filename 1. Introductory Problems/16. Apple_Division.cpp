#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

main()
{
    Fast_IO int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int min_diff = INT_MAX;
    for (int i = 0; i < (1 << a.size()) - 1; i++)
    {
        int temp_sum1 = 0, temp_sum0 = 0;
        for (int j = 0; j < a.size(); j++)
            (i & (1 << j)) ? temp_sum1 += a[j] : temp_sum0 += a[j];
        if (abs(temp_sum0-temp_sum1) < min_diff)
            min_diff = abs(temp_sum0 - temp_sum1);
    }
    cout << min_diff;
    return 0;
}