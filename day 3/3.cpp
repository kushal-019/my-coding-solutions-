// Chef had a sequence of positive integers with length N+K. He managed to calculate the arithmetic average of all elements of this sequence (let's denote it by 
// V), but then, his little brother deleted K elements from it. All deleted elements had the same value.
// Chef still knows the remaining N elements in a sequence . Help him with restoring the original sequence by finding the value of the deleted elements or deciding that there is some mistake and the described scenario is impossible. Note that the if it is possible for the deleted elements to have the same value, then it can be proven that it is unique. Also note that this value must be a positive integer.
// 3
// 3 3 4         4
// 2 7 3
// 3 1 4        -1
// 7 6 5
// 3 3 4        -1
// 2 8 3
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains three space-separated integers N, K and V.
// The second line contains N space-separated integers 

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int x,y,z;
	    int sum=0;
	    cin>>x>>y>>z;
	    int arr[x];
	    for(int j=0;j<x;j++){
	       cin>>arr[j]; 
	       sum+=arr[j];
	    }
	    int q;
        q=(z*x+z*y-sum);
        if(q%y==0 && q>0)
        cout<<q/y<<"\n";
        else
        cout<<"-1\n";
	    
	}
	return 0;
}
