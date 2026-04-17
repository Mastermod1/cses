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

bool check(unsigned long long l, unsigned long long r)
{
    auto rm = min(l/2, r);
    l = l - rm * 2;
    r = r - rm;
    return (l == 0 and r == 0) or (l == 1 and r == 2) or (l == 2 and r == 1);
}

int main()
{
    turbo;
    long long tt; cin >> tt;
    while (tt--)
    {
        unsigned long long l, r; cin >> l >> r; 
        cout << (2 * r >= l and 2 * l >= r and (2 * r - l) % 3 == 0 and (2 * l - r) % 3 == 0 ? "YES" : "NO") << endl;
    }
}
