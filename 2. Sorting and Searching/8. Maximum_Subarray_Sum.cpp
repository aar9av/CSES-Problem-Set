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
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int best=INT_MIN,sum=0;
    for(int i=0;i<n;i++){
        sum=max(a[i],sum+a[i]);
        best=max(best,sum);
    }
    cout << best;
    return 0;
}