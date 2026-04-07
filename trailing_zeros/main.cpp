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
    unsigned long long n; cin >> n;
    unsigned long long res = 0;
    unsigned long long pow = 5;
    for (unsigned long long i = 0; i < n; i++)
    {
        if (pow > n)
            break;
        res += n / pow;
        pow *= 5;
    }
    cout << res << endl;
}
