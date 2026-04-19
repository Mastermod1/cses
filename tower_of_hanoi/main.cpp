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

void hanoi(int n, int from, int to, int aux)
{
    if (n == 0) return;
    hanoi(n - 1, from, aux, to);
    cout << from << " " << to << endl;
    hanoi(n - 1, aux, to, from);
}

int main()
{
    turbo;
    int n; cin >> n;
    cout << ((1 << n) - 1) << endl;
    hanoi(n, 1, 3, 2);
}
