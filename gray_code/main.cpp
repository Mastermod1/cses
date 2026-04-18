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

int gray(int n) 
{
    return n ^ (n >> 1);
}

int main()
{
    turbo;
    int n; cin >> n;
    for (int i = 0; i < (1 << n); i++)
    {
        int val = gray(i);
        for (int j = n - 1; j >= 0; j--)
        {
            cout << ((val & (1 << j)) != 0);
        }
        cout << endl;
    }
}
