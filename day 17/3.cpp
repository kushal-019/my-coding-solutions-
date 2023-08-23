// you are given a string , print the reverse of it using recurssion;
// Sample Input 1:
// 3
// abcde
// coding
// hello1
 
// Sample Output 1:
// edcba
// gnidoc
// 1olleh

#include <bits/stdc++.h> 
using namespace std;

void rev(string& str,int i,int j){
if(i>j){
		return;
	}
	swap(str[i],str[j]);
	rev(str,i+1,j-1);
}

string reverseString(string& str)
{
	rev(str,0,str.length()-1);
	return str;

}