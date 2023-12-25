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
        int a,b;
        cin >> a >> b;
        if(a>b)
            swap(a,b);
        ((a+b)%3==0&&2*a>=b)?
            cout << "YES" << endl:
            cout << "NO" << endl;
    }
    return 0;
}