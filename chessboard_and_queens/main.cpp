#include <bits/stdc++.h>
 
#define endl '\n'
#define turbo ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
using namespace std;
 
void debug() { std::cout << "\n"; fflush(stdout); }
template<class T, class... Ts>
void debug(T arg, Ts &... args) {
    std::cout << arg << ' ';
    debug(args...);
}
 
struct custom_hash {
   static uint64_t splitmix64(uint64_t x) {
       x += 0x9e3779b97f4a7c15;
       x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
       x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
       return x ^ (x >> 31);
   }
   size_t operator()(uint64_t x) const {
       static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
       return splitmix64(x + FIXED_RANDOM);
   }
};
 
void count(const vector<string>& lines, int& res, vector<bool>& col, vector<bool>& d1, vector<bool>& d2, int size = 0)
{
    if (size == 8)
    {
        res++;
        return;
    }
 
    for (int i = 0; i < 8; i++)
    {
        if (lines[size][i] == '.' and not d1[size + i] and not d2[size - i + 7] and not col[i])
        {
            col[i] = true;
            d1[size + i] = true;
            d2[size - i + 7] = true;
            count(lines, res, col, d1, d2, size + 1);
            col[i] = false;
            d1[size + i] = false;
            d2[size - i + 7] = false;
        }
    }
}
 
int main()
{
    turbo;
    vector<string> lines;
    for (int i = 0; i < 8; i++)
    {
        string line; cin >> line;
        lines.push_back(line);
    }
 
    int res = 0;
    vector<bool> col, d1, d2;
    col = d1 = d2 = vector<bool>(15, false);
    count(lines, res, col, d1, d2);
    cout << res << endl;
}
