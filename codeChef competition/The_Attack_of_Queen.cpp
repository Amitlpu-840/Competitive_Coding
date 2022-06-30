#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, x1, x2, y1, y2;
        cin >> n >> x >> y;
        int arr[n][n] = {0};
        int ct = 2 * (n - 1);
        for (int i = 1; i <= n; i++)
        {
            x1 = x + i;
            y1 = y + i;
            if (x1 <= n || y2 <= n)
            {
                ct++;
            }
            x2 = x - i;
            y2 = y - i;
            if (y2 >= 1 || x2 >= 1)
            {
                ct++;
            }
            else
                break;
        }
        cout << ct << endl;
    }
    return 0;
}