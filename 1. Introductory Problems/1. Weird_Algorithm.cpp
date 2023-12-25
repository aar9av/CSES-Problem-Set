#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

main()
{
    Fast_IO
    int n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        n = (n % 2) ? 3 * n + 1 : n / 2;
    }
    cout << n;
    return 0;
}