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
    int mx = -1, curr = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            curr = 0;
        curr++;
        mx = max(curr, mx);
    }
    cout << mx << endl;
}
