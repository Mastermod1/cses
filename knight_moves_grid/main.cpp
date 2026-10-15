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
    int n; cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, INT_MAX));

    queue<pair<int, int>> q;
    grid[0][0] = 0;
    q.push({0, 0});
    vector<pair<int, int>> dirs{{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};

    while (not q.empty())
    {
        auto pos = q.front();
        q.pop();

        for (const auto& dir : dirs)
        {
            if (pos.first + dir.first < 0 or pos.first + dir.first >= n or pos.second + dir.second < 0 or pos.second + dir.second >= n or grid[pos.first][pos.second] + 1 >= grid[pos.first + dir.first][pos.second + dir.second]) continue;

            grid[pos.first + dir.first][pos.second + dir.second] =grid[pos.first][pos.second] + 1; 
            q.push({pos.first + dir.first, pos.second + dir.second});
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}
