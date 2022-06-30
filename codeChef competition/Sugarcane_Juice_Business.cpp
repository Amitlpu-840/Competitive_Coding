#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        int total;
        total = p * 50;
        cout << total * 30 / 100 << endl;
    }
    return 0;
}