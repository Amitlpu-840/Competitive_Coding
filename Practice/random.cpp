#include <bits/stdc++.h>
using namespace std;

void countKMax(int arr[], int n, int k)
{

    // int arr2[k];

    for (int i = 0; i <= n - k; i++)
    {
        int mx = 0, ans;
        for (int j = i; j < k + i; j++)
        {

            int count = 0;
            int q = arr[j];
            // counting no. of one's in binary representation
            while (q)
            {

                count += q & 1;
                q >>= 1;
            }
            // arr2[v] = count;
            // ++v;
            if (mx <= count)
            {
                mx = count;
                ans = arr[j];
            }
        }
        // int w = *max_element(arr2, arr2 + k);
        // int elem = w + i;
        // cout << arr[elem] << " ";
        // cout << *max_element(arr2, arr2 + k)<<" ";
        cout << ans << " ";
    }
    // return *max_element(arr, arr + k);
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countKMax(arr, n, k);

    return 0;
}