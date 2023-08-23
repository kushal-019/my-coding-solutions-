// Check If Binary Representation of a Number is Palindrome
// ninja is given a integer N , you have to find out weather the binary form of integer is palindrome or not. 
// Sample Input 1:
// 2    
// 7
// 10
// Sample Output 1:
// true
// false

#include <bits/stdc++.h> 
using namespace std;

bool check(string& s){
	int i=0;
	int j= s.length()-1;
	while(i<=j){
		if(s[i]!=s[j]){
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

bool checkPalindrome(long long N)
{
	string bin="";
	while(N!=0){
		int i=0;
		int x=N&1;
	string ans = to_string(x);
	bin = bin + ans;
	N=N>>1;
	}

	if (check(bin))
	return 1;
	return 0;
}
int main(){
    long long a;
    cin>>a;
    if (checkPalindrome(a))
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    return 0;
    
}

