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
    unordered_map<char, int> mp;
    for (char it : s)
        mp[it]++;
    string s_even, mid;
    for (auto it : mp)
    {
        if (it.second % 2)
            for (int i = 0; i < it.second; i++)
                mid += it.first;
        else
            for (int i = 0; i < it.second / 2; i++)
                s_even += it.first;
    }
    string s_even_rev = s_even;
    reverse(s_even_rev.begin(), s_even_rev.end());
    string s_pal = s_even + mid + s_even_rev, s_pal_rev = s_pal;
    reverse(s_pal_rev.begin(), s_pal_rev.end());
    (s_pal == s_pal_rev) ? cout << s_pal : cout << "NO SOLUTION";
    return 0;
}