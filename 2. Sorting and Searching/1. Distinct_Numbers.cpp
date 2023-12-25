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
    set<int> s;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        s.insert(t);
    }
    cout << s.size();
    return 0;
}