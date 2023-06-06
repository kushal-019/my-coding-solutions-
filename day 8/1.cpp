// There are N hills in a row numbered 1 through N from left to right. Each hill has a height; for each valid i, the height of the i-th hill is Hi. Chef is initially on the leftmost hill (hill number 1). He can make an arbitrary number of jumps (including zero) as long as the following conditions are satisfied:

// Chef can only jump from each hill to the next hill, i.e. from the i-th hill, he can jump to the i+1-th hill (if it exists).
// It's always possible to jump to a hill with the same height as the current hill.
// It's possible to jump to a taller hill if it's higher than the current hill by no more than U.
// It's possible to jump to a lower hill if it's lower than the current hill by no more than D.
// Chef can use a parachute and jump to a lower hill regardless of its height (as long as it's lower than the current hill). This jump can only be performed at most once.
// Chef would like to move as far right as possible. Determine the index of the rightmost hill Chef can reach.
// 3
// 5 3 2
// 2 5 2 6 3					3
// 5 2 3	
// 4 4 4 4 4					5
// 5 2 7
// 1 4 3 2 1					1

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	for (int i=0;i<a;i++){
	    int n,u,d;
	    cin>>n>>u>>d;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    int para=0;
	    int count=1;
	    int current=arr[0];
	    for(int j=1;j<n;j++){
	        if(arr[j]-current<=u&&current-arr[j]<=d){
	            count=j+1;
	           // cout<<current<<"  "<<arr[j]<<endl;;
	            current=arr[j];
	        }
	        else if(para!=1&&current-arr[j]>d){
	            para=1;
	            current=arr[j];
	            count=j+1;
	        }
	        else{
	            break;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
