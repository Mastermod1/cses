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
    // unsigned long long sum = static_cast<double>(n)/2 * (1 + n);
    unsigned long long sum = (n * (1 + n))/2;
    for (unsigned long long i = 0; i < n - 1; i++)
    {
        unsigned long long num; cin >> num;
        sum -= num;
    }
    cout << sum << endl;
}
