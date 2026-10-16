#include <bits/stdc++.h>
#include <string>

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
    long long tt; cin >> tt;
    while (tt--)
    {
        unsigned long long k; cin >> k;
        k--;
        unsigned long long start = 1, end = 10;
        unsigned long long cnt = 1;
        while (k > (end - start) * cnt)
        {
            k -= (end - start) * cnt;
            start = end;
            end = end * 10;
            cnt++;
        }
        unsigned long long num = start + (k/cnt);
        cout << to_string(num)[k % cnt] << endl;
    }
}
