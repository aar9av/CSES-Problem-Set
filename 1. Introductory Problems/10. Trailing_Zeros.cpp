#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

main()
{
    Fast_IO int n,cnt=0;
    cin >> n;
    for(int i=5;i<=n;i*=5)
        cnt+=n/i;
    cout << cnt;
    return 0;
}