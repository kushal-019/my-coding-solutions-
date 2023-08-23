// Roman has no idea, why this problem is called Stone. He also has no idea on how to solve the followong problem: given array of N integers A and a number K. During a turn the maximal value over all Ai is chosen, let's call it MAX. Then Ai = MAX - Ai is done for every 1 <= i <= N. Help Roman to find out how will the array look like after K turns.

// 4 1
// 5 -1 7 0    2 8 0 7

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long a,k;
    cin>>a>>k;
    vector<long long>arr;
    for(int i=0;i<a;i++){
        long x;
        cin>>x;
        arr.push_back(x);
    }
    if(k==0)
	    k=0;
	else if(k%2==0)
	    k=2;
	else
	    k=1;
    for(int i=0;i<k;i++){
        long long max=*max_element(arr.begin(),arr.end());
        for(int j=0;j<a;j++){
            arr[j]=max-arr[j];
        }
    }
    for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
        
    }
    
	return 0;
}
