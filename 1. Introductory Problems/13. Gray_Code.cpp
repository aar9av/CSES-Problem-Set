#include <bits/stdc++.h>
#define int long long
#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int mod = 1e9 + 7;

vector<int> greyCode(int n){
    if(n==1)
        return {0,1};
    vector<int> v,t;
    v=greyCode(n-1);
    t=v;
    reverse(t.begin(),t.end());
    for(int i=0;i<t.size();i++)
        v.push_back(t[i] + (1 << (n - 1)));
    return v;
}

main()
{
    Fast_IO int n;
    cin >> n;
    vector<int> v;
    v=greyCode(n);
    vector<string> res;
    for(int i=0;i<v.size();i++)
        res.push_back(bitset<16>(v[i]).to_string());
    for(auto &it: res)
        it.erase(0,16-n);
    for(auto &it: res)
        cout << it << endl;
    return 0;
}