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
    map<char, int> cnt;
    for (auto& c : s)
        cnt[c]++;
    for (const auto& [x, y] : cnt)
    {
        if (y > (s.size() + 1)/2)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    char prev = '-';
    auto size = s.size();
    string res = "";
    while (size)
    {
        char choice;
        for (const auto& [x, y] : cnt)
        {
            if (x != prev)
            {
                choice = x;
                break;
            }
        }

        for (const auto& [x, y] : cnt)
        {
            if (x == prev or x == choice)
                continue;
            if (y > size / 2)
            {
                choice = x;
                break;
            }
        }
    
        cnt[choice]--;
        if (cnt[choice] == 0)
            cnt.erase(choice);
        res += choice;
        prev = choice;
        size--;
    }

    cout << res << endl;
    return 0;
}
