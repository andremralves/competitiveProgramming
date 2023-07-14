#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n, m;

    cin >> n >> m;

    ll s;
    long long a = 0;
    cin >> s;
    ll x, x1, x2, y, y1, y2, r;
    for (ll i = 0; i < s; i++)
    {
        cin >> x >> y >> r;
        if (x - r < 0)
        {
            x1 = 0;
        }
        else
        {
            x1 = x - r;
        }

        if (x + r >= n)
        {
            x2 = n - 1;
        }
        else
        {
            x2 = x + r;
        }

        if (y - r < 0)
        {
            y1 = 0;
        }
        else
        {
            y1 = y - r;
        }

        if (y + r >= m)
        {
            y2 = m - 1;
        }
        else
        {
            y2 = y + r;
        }
        a += (x2 - x1 + 1) * (y2 - y1 + 1);
        // cout << '\t' << x2 << ' ' << x1 << ' ' << y2 << ' ' << y1 << ' ' << a << endl;
    }
    cout << a / (m * n) << endl;

    return 0;
}
