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
    string s; cin >> s;
    unordered_map<char, unsigned long long> cnt;
    for (const auto& x : s)
    {
        cnt[x]++;
    }
    bool odd = false;
    char oddC = ' ';
    for (const auto& [x, y] : cnt)
    {
        if (y % 2 == 1)
        {
            if (not odd) {
                odd = true;
                oddC = x;
            } else {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }
    string res = "";
    for (const auto& [x, y] : cnt)
    {
        if (y % 2 == 1)
            continue;
        res += string(y/2, x);
    }
    cout << res;
    cout << string(cnt[oddC], oddC);
    reverse(res.begin(), res.end());
    cout << res << endl;
}
