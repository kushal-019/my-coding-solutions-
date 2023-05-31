// There are N students living in the dormitory of Berland State University. Each of them sometimes wants to use the kitchen, so the head of the dormitory came up with a timetable for kitchen's usage in order to avoid the conflicts:

// The first student starts to use the kitchen at the time 0 and should finish the cooking not later than at the time A1.
// The second student starts to use the kitchen at the time A1 and should finish the cooking not later than at the time A2.
// And so on.
// The N-th student starts to use the kitchen at the time AN-1 and should finish the cooking not later than at the time AN
// The holidays in Berland are approaching, so today each of these N students wants to cook some pancakes. The i-th student needs Bi units of time to cook.

// The students have understood that probably not all of them will be able to cook everything they want. How many students will be able to cook without violating the schedule?

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int b;
	    cin>>b;
	    int arr[b];
	    int arr2[b];
	    int count=0;
	    for(int j=0;j<b;j++){
	        cin>>arr[j];
	    }
	    for(int j=0;j<b;j++){
	        cin>>arr2[j];
	    }
	    for(int j=0;j<b;j++){
	        if(j!=0){
	            if(arr2[j]<=arr[j]-arr[j-1]){
	                count++;
	            }
	    }
	    else{
	        if(arr2[j]<=arr[j]){
	                count++;
	            }
	    }
	}
	    cout<<count<<endl;
	}
	return 0;
}
