#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

main()
{
    Fast_IO int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int res = 0;
    for (int i = v.size() - 1, j = 0; i >= j; i--,res++)
        if (v[i] + v[j] <= x)
            j++;
    cout << res;
    return 0;
}