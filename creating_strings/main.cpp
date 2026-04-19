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

void gen(string& s, map<char, unsigned long long >& mp, unsigned long long  pos = 0)
{
    if (pos == s.length())
    {
        cout << s << endl;
        return;
    }
    for (auto& [x, y] : mp)
    {
        if (y == 0)
            continue;
        mp[x]--;
        s[pos] = x;
        gen(s, mp, pos + 1);
        mp[x]++;
    }
}

unsigned long long  factorial(unsigned long long  n)
{
    unsigned long long  res = 1;
    for (unsigned long long  i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

void sol1(string s)
{
    map<char, unsigned long long > mp;
    for (const auto& x : s)
        mp[x]++;
    unsigned long long  res = 1;
    for (const auto& [x, y] : mp)
    {
        if (y == 1) continue;
        res *= factorial(y);
    }
    cout << factorial(s.length()) / res << endl;
    gen(s, mp);
}

void sol2(string s)
{
    sort(s.begin(), s.end());
    vector<string> v;
    do {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << v.size() << "\n";
    for (auto s : v) {
        cout << s << "\n";
    }
}

int main()
{
    turbo;
    string s; cin >> s;
    sol1(s);
}
