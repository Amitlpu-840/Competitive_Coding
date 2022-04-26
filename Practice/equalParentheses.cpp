#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() % 2 != 0)
            return false;

        stack<char> bracketStack;
        for (int i = 0; i < s.length(); i++)
        {
            if (bracketStack.empty() && (s[i] == ')' || s[i] == ']' || s[i] == '}'))
                return false;
            else
            {
                if (s[i] == ')')
                {
                    if (bracketStack.top() == '(')
                        bracketStack.pop();
                    else
                        return false;
                }
                else if (s[i] == ']')
                {
                    if (bracketStack.top() == '[')
                        bracketStack.pop();
                    else
                        return false;
                }
                else if (s[i] == '}')
                {
                    if (bracketStack.top() == '{')
                        bracketStack.pop();
                    else
                        return false;
                }
                else
                    bracketStack.push(s[i]);
            }
        }
        return bracketStack.empty();
    }
};
int main()
{
    string s;
    cin >> s;
    Solution s1;
    cout << s1.isValid(s);
    return 0;
}