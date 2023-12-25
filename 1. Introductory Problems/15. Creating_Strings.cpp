#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

main()
{
    Fast_IO string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<string> v;
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout << v.size() << endl;
    for(auto it: v)
        cout << it << endl;
    return 0;
}