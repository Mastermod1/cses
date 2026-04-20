#include <bits/stdc++.h>

#define endl '\n'
#define turbo ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using ull = unsigned long long;
using ll = long long;

using namespace std;
void debug() { std::cout << "\n"; fflush(stdout); }
template<class T, class... Ts>
void debug(const T& arg, const Ts&... args) {
    std::cout << arg << ' ';
    debug(args...);
}

ll mn = 10e9;

ll check(vector<ll>& v, size_t pos = 0, ll sl = 0, ll sr = 0)
{
    if (pos == v.size())
        return abs(sl - sr);

    auto left = check(v, pos + 1, sl + v[pos], sr);
    auto right = check(v, pos + 1, sl, sr + v[pos]);

    return min(left, right);
}

int main()
{
    turbo;
    size_t n; cin >> n;
    vector<ll> v(n);
    for (auto& x : v)
        cin >> x;
    cout << check(v) << endl;
}
