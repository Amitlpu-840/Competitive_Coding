#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 1;
        cin >> n;
        int arr[n];
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int l = sizeof(arr);
        if (l == 1)
        {
            cout << l;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < 0 && arr[i + 1] > 0 || arr[i] > 0 && arr[i + 1] < 0)
                c++;
            else
            {
                break;
            }
        }
    }

    return 0;
}