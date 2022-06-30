#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin, s);
    int ch[5];
    for (int i = 0; i < 5; i++)
    {
        ch[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'c':
            ch[0]++;
        case 'o':
            ch[1]++;
        case 'v':
            ch[2]++;
        case 'i':
            ch[3]++;
        case 'd':
            ch[4]++;
        }
    }
    cout << *min_element(ch, ch + 5);
    return 0;
}