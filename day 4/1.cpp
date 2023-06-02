// Rushitote went to a programming contest to distribute apples and oranges to the contestants.He has N apples and M oranges, which need to be divided equally amongst the contestants. Find the maximum possible number of contestants such that:Every contestant gets an equal number of apples; andEvery contestant gets an equal number of oranges.Note that every fruit with Rushitote must be distributed, there cannot be any left over.
// For example, 2 apples and 4 oranges can be distributed equally to two contestants, where each one receives 1 apple and 2 oranges.
// However, 2 apples and 5 oranges can only be distributed equally to one contestant.

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int b,c,h;
	    cin>>b>>c;
	    h=gcd(b,c);
	    cout<<h<<endl;
	}
	return 0;
}
