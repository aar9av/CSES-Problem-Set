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
    int sum = 0, sum_n = (n % 2) ? (n + 1) / 2 * n : n / 2 * (n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    cout << sum_n - sum;
    return 0;
}