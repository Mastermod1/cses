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
    int m, n; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c; cin >> c;
            v[i][j] = c;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vector<bool> letters(4, true);
            char letter = v[i][j];
            letters[v[i][j] - 'A'] = false;
            if (i - 1 >= 0)
                letters[v[i-1][j] - 'A'] = false;
            if (j - 1 >= 0)
                letters[v[i][j-1] - 'A'] = false;
            int ind = (letter - 'A' + 1) % 4;
            bool filled = false;
            while (ind != letter - 'A')
            {
                if (letters[ind])
                {
                    v[i][j] = ('A' + ind);
                    filled = true;
                    break;
                }
                ind = (ind + 1) % 4;
            }
            if (not filled)
            {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }

        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << v[i][j];
        cout << endl;
    }
}
