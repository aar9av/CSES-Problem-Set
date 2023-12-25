#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define itt(it, x) for (auto it : x)
#define it(x) x.begin(), x.end()
using namespace std;
int mod = 1e9 + 7;

void tower(int n,int source,int helper,int destination){
    if(n==0)
        return;
    tower(n-1,source,destination,helper);
    cout << source << " " << destination << endl;
    tower(n-1,helper,source,destination);
}

main()
{
    Fast_IO;
    int n;
    cin >> n;
    cout << (1<<n)-1 << endl;
    tower(n,1,2,3);
    return 0;
}