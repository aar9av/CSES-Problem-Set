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
    vector<int> pos(n);
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        pos[t-1]=i+1;
    }
    int count=1;
    for(int i=0;i<n-1;i++)
        if(pos[i]>pos[i+1])
            count++;
    cout << count;
    return 0;
}