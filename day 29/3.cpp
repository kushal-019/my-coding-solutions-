// insert at the bottom of the  stack.

// Sample Input 1 :
// 2
// 3 8
// 4 3 2
// 4 5
// 6 2 4 9
// Sample Output 1 :
// 8 4 3 2
// 5 6 2 4 9

#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();
    solve(myStack, x);

    myStack.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x)
{

    solve(myStack, x);
    return myStack;
}
