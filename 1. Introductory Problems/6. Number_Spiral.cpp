#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

main()
{
    Fast_IO int t;
    cin >> t;
    while (t--)
    {
        unsigned int y, x;
        cin >> y >> x;
        if (y > x)
            (y % 2)?
                cout << (y - 1) * (y - 1) + x:
                cout << y * y - x + 1;
        else
            (x % 2)?
                cout << x * x - y + 1:
                cout << (x - 1) * (x - 1) + y;
        cout << endl;
    }
    return 0;
}