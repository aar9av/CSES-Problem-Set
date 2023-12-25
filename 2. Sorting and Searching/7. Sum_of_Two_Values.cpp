#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

main()
{
    Fast_IO int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = 0, y = 0;
    vector<int> b = a;
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        int e = n - 1, s = i + 1, key = m - b[i];
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (b[mid] > key)
                e = mid - 1;
            if (b[mid] < key)
                s = mid + 1;
            if (b[mid] == key)
            {
                x = b[i];
                y = b[mid];
                break;
            }
        }
        if (x || y)
        {
            if (x == y)
            {
                auto it1 = find(a.begin(), a.end(), x) - a.begin() + 1;
                auto it2 = find(a.begin() + it1, a.end(), x) - a.begin() + 1;
                cout << it1 << " " << it2;
                return 0;
            }
            auto it1 = find(a.begin(), a.end(), x) - a.begin() + 1;
            auto it2 = find(a.begin(), a.end(), y) - a.begin() + 1;
            cout << it1 << " " << it2;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}