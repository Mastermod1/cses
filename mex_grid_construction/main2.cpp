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
    long long n; cin >> n;
    vector<bitset<1024>> row(n);
    vector<bitset<1024>> col(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            auto avail = ~(row[i] | col[j]);
            int mex = avail._Find_first();
            cout << mex << " ";
            row[i].set(mex);
            col[j].set(mex);
        }
        cout << endl;
    }
}
