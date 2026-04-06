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

unsigned long long mod = 1e9 + 7;

int main()
{
    turbo;
    unsigned long long n; cin >> n;
    unsigned long long res = 1;
    for (unsigned long long i = 0; i < n; i++)
    {
        res *= 2;
        res %= mod;
    }
    cout << res << endl;
}
