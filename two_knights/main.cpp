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
    long long cnt; cin >> cnt;
    for (long long i = 1; i <=  cnt; i++)
    {
        long long n = i * i;
        long long total = (n  * (n - 1)) / 2;
        long long subtract = 4 * max((i - 1) * (i - 2), 0ll);
        cout << total - subtract << endl;
    }
}
