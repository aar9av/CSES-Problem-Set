#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

long long pow(int base, int exp)
{
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    long long half = pow(base, exp / 2);
    long long res = (half * half) % mod;
    return (exp % 2 ? (res * base) % mod : res);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int base, exp;
        cin >> base >> exp;
        cout << pow(base, exp) << endl;
    }
    return 0;
}
