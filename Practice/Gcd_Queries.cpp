#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        int fwd[n + 10];
        int bkd[n + 10];
        fwd[0] = bkd[n + 1] = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            fwd[i] = __gcd(fwd[i - 1], a[i]);
        }
        for (int i = n; i >= 1; --i)
        {
            bkd[i] = __gcd(bkd[i + 1], a[i]);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int gc = 0;

            int ch = 0;

            cout << __gcd(fwd[l - 1], bkd[r + 1]) << endl;
        }
    }

    return 0;
}