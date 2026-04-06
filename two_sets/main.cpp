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
    long long n; cin >> n;
    long long sum = ((1 + n) * n) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
        long long half = sum / 2;
        long long last = -1;
        for (long long i = n; i >= 1; i--)
        {
            if (half - i < 0)
                break;
            half -= i;
            last = i;
        }
        long long len = half != 0 ? n - last + 2 : n - last + 1;
        cout << len << endl;
        if (half != 0)
            cout << half << " ";
        for (long long i = last; i <= n; i++)
            cout << i << " ";
        cout << endl;
        cout << n - len << endl;
        for (int i = 1; i < last; i++)
        {
            if (i == half)
                continue;
            cout << i << " ";
        }
        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
