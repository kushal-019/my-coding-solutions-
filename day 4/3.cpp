// The most popular feature on snapchat is Snapchat Streak.A streak is maintained between two people if both of them send at least one snap to each other daily.If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to 0.Chef and Chefina like maintaining their snapchat streak. You observed the snap count of both of them for N consecutive days.On the ith day, Chef sent Ai snaps to Chefina while Chefina sent Bi  snaps to Chef.Find the maximum streak count they achieved in those N days.
// 4
// 3
// 3 1 2                 3
// 2 4 1
// 2
// 0 0                   0
// 10 10
// 4
// 5 4 0 2               2
// 3 1 1 0
// 5
// 0 1 1 2 0             1
// 1 1 0 0 3



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int b;
	    cin>>b;
	    int arr1[b],arr2[b];
	    for(int j=0;j<b;j++){
	        cin>>arr1[j];
	    }
	    int count=0;
	    int max=0;
	    for(int j=0;j<b;j++){
	        cin>>arr2[j];
	    }
	    for(int j=0;j<b;j++){
	        if(arr1[j]!=0&&arr2[j]!=0){
	            count++;
	            if(count>max){
	                max=count;
	            }
	        }
	        else{
	            count=0;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
