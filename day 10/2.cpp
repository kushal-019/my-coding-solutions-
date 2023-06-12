// In Ciel's restaurant, a waiter is training. Since the waiter isn't good at arithmetic, sometimes he gives guests wrong change. Ciel gives him a simple problem. What is A-B (A minus B) ?

// Surprisingly, his answer is wrong. To be more precise, his answer has exactly one wrong digit. Can you imagine this? Can you make the same mistake in this problem?

// 5858 1234               1624

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int c= a-b;
	if(c%10==9) cout<<(c-1)<<endl;
	else cout<<(c+1)<<endl;
	return 0;
}
