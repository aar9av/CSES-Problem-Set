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
    int sum = n*(n + 1) / 2;
    if (sum & 1)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    sum = sum >> 1;
    vector<int> v1, v2;
    for (int i = n; i > 0; i--)
    {
        if (i <= sum)
        {
            v1.push_back(i);
            sum -= i;
        }
        else
            v2.push_back(i);
    }
    cout << v1.size() << endl;
    for (auto it : v1)
        cout << it << " ";
    cout << endl;
    cout << v2.size() << endl;
    for (auto it : v2)
        cout << it << " ";
    return 0;
}