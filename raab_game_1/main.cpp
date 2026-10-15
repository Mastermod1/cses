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
    long long tt; cin >> tt;
    while (tt--)
    {
        int n, a, b; cin >> n >> a >> b;
        int draw_count = n - a - b;
        if (((a == 0 or b == 0) and a != b) or
            (a + b > n)
           )
        {
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
        vector<int> aa(n, 0), bb(n, 0);
        for (int i = 0; i < n; i++)
            aa[i] = i + 1;

        int i = 0;
        for (; i < draw_count; i++)
        {
            bb[i] = i + 1;
        }

        int start_point = i;
        int shift = a;
        int pos = start_point + shift;
        // cout << a << " : " << b << endl;
        for (int j = i; j < bb.size(); j++)
        {
            bb[j] = aa[pos];
            pos = pos + 1 >= aa.size() ? start_point : pos + 1;
        }

        for (int j = 1; j <= n; j++)
            cout << j << " ";
        cout << endl;
        for (auto x : bb)
            cout << x << " ";
        cout << endl;

        // 4 1 2
        // 1| 2 4 1 3  
        // 2| 2 1 3 4
        // 1 4 3 2
        // 1 2 4 3
        // 1 2 3
        
    }
}
