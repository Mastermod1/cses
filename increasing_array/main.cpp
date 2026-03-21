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
    unsigned n; cin >> n;
    unsigned prev;
    unsigned long long res = 0;
    cin >> prev;
    for (unsigned i = 1; i < n; i++)
    {
        unsigned c; cin >> c;
        if (c < prev)
        {
            res += prev - c;
        }
        else
        {
            prev = c;
        }
        
    }
    cout << res << endl;
}
