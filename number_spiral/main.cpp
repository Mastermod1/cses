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

unsigned long long square(unsigned long long n) {
    return n * n;
}

void v1(unsigned long long y, unsigned long long x)
{
    bool evenY = y % 2 == 0;
    bool evenX = x % 2 == 0;
    if (x <= y)
    {
        if (evenY)
            cout << square(max(x,y)) - min(x,y) + 1 << endl; // -
        else
            cout << square(max(x,y) - 1) + min(x,y) << endl; // +
    }
    else if ((evenY and not evenX) or (not evenY and not evenX))
        cout << square(max(x,y)) - min(x,y) + 1 << endl; // -
    else if ((evenY and evenX) or (not evenY and evenX))
        cout << square(max(x,y) - 1) + min(x,y) << endl; // +
}

void v2(unsigned long long y, unsigned long long x)
{
    unsigned long long layer = max(y, x);
    // (3,2) -> 4 + 2 + (3 - 3) = 6
    // (2,3) -> 4 + 3 + (3 - 2) = 8
    if (layer % 2 != 0)
        cout << square(layer - 1) + x + (layer - y) << endl;
    else
        cout << square(layer) - ((x - 1) + (layer - y)) << endl;
    // (4,2) -> 16 - ((2 - 1) + (4 - 4)) = 15
    // (4,4) -> 16 - ((4 - 1) + (4-4)) = 13
    // (2,4) -> 16 - ((4 - 1) + (4 - 2)) = 11
}

int main()
{
    turbo;
    long long tt; cin >> tt;
    while (tt--)
    {
        unsigned long long y, x; cin >> y >> x;
        // cout << "v1: ";
        // v1(y,x);
        // cout << "v2: ";
        v2(y,x);
    }
}
