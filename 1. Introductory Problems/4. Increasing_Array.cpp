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
    int prev,sum=0;
    cin >> prev;
    for(int i=1;i<n;i++){
        int temp;
        cin >> temp;
        if(temp<prev)
            sum+=prev-temp;
        prev=max(temp,prev);
    }
    cout << sum;
    return 0;
}