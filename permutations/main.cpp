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
    unsigned long long x; cin >> x;
    if (x > 1 and x < 4)
    {
	cout << "NO SOLUTION" << endl;
    }
    else
    {
    	for (int i = 2; i <= x; i += 2)
    	{
	    cout << i << " ";
    	}

    	for (int i = 1; i <= x; i += 2)
    	{
	    cout << i << " ";
    	}

    }
    cout << endl;
}
