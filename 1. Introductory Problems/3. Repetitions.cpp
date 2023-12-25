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
    string dna;
    cin >> dna;
    int max_cnt = 1, cnt = 1;
    for (int i = 1; i < dna.size(); i++)
    {
        if (dna[i - 1] == dna[i])
        {
            cnt++;
            if (cnt > max_cnt)
                max_cnt = cnt;
        }
        else
            cnt = 1;
    }
    cout << max_cnt;
    return 0;
}