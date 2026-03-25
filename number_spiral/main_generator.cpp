#include <bits/stdc++.h>

#define endl '\n'
#define turbo ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;
void debug() { std::cout << "\n"; fflush(stdout); }
template<class T, class... Ts>
void debug(const T& arg, const Ts&... args) {
    std::cout << arg << ' ';
    debug(args...);
}

int main()
{
    turbo;
    // long long tt; cin >> tt;
    // while (tt--)
    // {
    //     unsigned int x, y; cin >> y >> x;
    //
    //
    //
    // }
    int x[8][8] = {0};
    int n = 1;
    int upright = true;
    int r = 0, c = 0;
    int side = 1;
    while (n <= 8 * 8)
    {
        if (upright)
        {
            for (int i = 0; i < side; i++)
            {
                x[r][c++] = n;
                n++;
            }
            c--;
            r--;
            for (int i = 0; i < side - 1; i++)
            {
                x[r--][c] = n;
                n++;
            }
            r = 0;
            c = side;
        }
        else {
            for (int i = 0; i < side; i++)
            {
                x[r++][c] = n;
                n++;
            }
            r--;
            c--;
            for (int i = 0; i < side - 1; i++)
            {
                x[r][c--] = n;
                n++;
            }
            r = side;
            c = 0;
        }
        upright = !upright;
        side += 1;

        // for (int i = 0; i < 8; i++)
        // {
        //     for (int j = 0; j < 8; j++)
        //         cout << x[i][j] << " ";
        //     cout << endl;
        // }
        // cout << endl;
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cout << x[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}
