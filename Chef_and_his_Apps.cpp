#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, s, z;
        cin >> s >> x >> y >> z;
        if ((s - (x + y)) > z)
        {
            cout << 0 << endl;
        }
        else if (((s - x) > z) || ((s - y) > z))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }

        // cout << endl;
    }
    return 0;
}
