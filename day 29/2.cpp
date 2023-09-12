// check wheather bracket are balanced or not

// Sample Input 1 :
// [()]{}{[()()]()}
// Sample Output 1 :
// Balanced

#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string s)
{
    int x = s.length();

    stack<char> s1;

    for (int i = 0; i < x; i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            s1.push(s[i]);
        }
        else
        {
            if (!s1.empty())
            {

                if (s[i] == '}' || s[i] == ']' || s[i] == ')')
                {
                    if (s[i] == '}' && s1.top() == '{')
                    {
                        s1.pop();
                    }
                    else if (s[i] == ']' && s1.top() == '[')
                    {
                        s1.pop();
                    }
                    else if (s[i] == ')' && s1.top() == '(')
                    {
                        s1.pop();
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            else
            {
                return 0;
            }
        }
    }
    if (s1.empty())
    {
        return 1;
    }
    return 0;
}