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
    for(int i=1;i<=n;i++){
        int total_pos=i*i*(i*i-1)/2;
        int attack_pos=4*(i-1)*(i-2);
        cout << total_pos-attack_pos << endl;
    }
    return 0;
}