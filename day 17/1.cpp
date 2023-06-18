// You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C

// Sample Input 1 :
// 2 
// 3 1 2
// 4 3 10
// Sample Output 1 :
// 1
// 4

#include<bits/stdc++.h>
using namespace std;
int modularExponentiation(int x, int n, int m) {
	long long ans=1;
	
	while(n>0){
		if(n&1){
			ans=(ans*(x%m))%m;
		}
			x=(1LL * (x%m)*(x%m))%m;
		
		n=n>>1;
	}
	return ans;
}