#include <iostream>
#include <vector>
using namespace std;

int res = 0;
vector<string> board(8);
vector<bool> col(8, 0), d1(8, 0), d2(8, 0);

void nQueen(int y = 0)
{
    if (y == 8)
    {
        res++;
        return;
    }
    for (int x = 0; x < 8; x++)
    {
        if (col[x] || d1[x + y] || d2[x - y + 7] || board[x][y] == '*')
            continue;
        col[x] = d1[x + y] = d2[x - y + 7] = 1;
        nQueen(y + 1);
        col[x] = d1[x + y] = d2[x - y + 7] = 0;
    }
}

int main()
{
    for (int i = 0; i < 8; i++)
        cin >> board[i];
    nQueen();
    cout << res;
    return 0;
}