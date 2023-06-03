You have N cards placed in front of you on the table. Theith card has the number Ai written on it.In one move, you can remove any one card from the remaining cards on the table.Find the minimum number of moves required so that all the cards remaining on the table have the same number written on them

// 3
// 5
// 1 1 2 2 3		3
// 4
// 8 8 8 8			0
// 6
// 5 6 7 8 9 10	5

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int b;
	    cin>>b;
	    int arr[b];
	    for(int j=0;j<b;j++){
	        cin>>arr[j];
	    }
	    sort(arr,arr+b);
	    int count=1,max=1;
	    for(int j=0;j<b-1;j++){
	        if(arr[j]==arr[j+1]){
	            count++;
	            if(count>max){
	                max=count;
	            }
	        }
	        else{
	            count=1;
	        }
	    }
	    cout<<b-max<<endl;
	}
	return 0;
}
