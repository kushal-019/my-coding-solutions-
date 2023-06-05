// Alice and Bob went to a pet store. There are N animals in the store where the ith animal is of type Ai ,Alice decides to buy some of these N animals. Bob decides that he will buy all the animals left in the store after Alice has made the purchase.Find out whether it is possible that Alice and Bob end up with exactly same multiset of animals.
// 4
// 3
// 4 4 4       NO
// 4
// 2 3 3 2     YES
// 4
// 1 2 2 3     NO
// 6
// 5 5 1 5 1 5 YES

#include <iostream>
#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        int arr[x];
        for (int j = 0; j < x; j++)
        {
            cin >> arr[j];
        }
        if (x % 2 != 0)
        {
            cout << "NO" << endl;

        }
        else
        {
            sort(arr, arr + x);
            int o = 1;
            for (int j = 0; j < x - 1; j = j + 2)
            {
                if (arr[j] != arr[j + 1])
                {
                    cout << "NO" << endl;
                    o = 0;
                    break;
                }
            }
            if (o == 1)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
