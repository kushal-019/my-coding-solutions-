// Chef decided to go on a diet during the following N days (numbered 1 through N). Part of the diet plan is to eat K grams of protein during each day. For each valid i, Chef wants to buy Ai grams of protein in the morning of the i-th day and then eat K grams of protein as part of his dinner. If he has any protein remaining, he can store it and use it in later dinners. Initially, Chef is storing 0 grams of protein.Determine whether Chef will have enough protein all the time during his diet. In case he will not have enough, find the first day on which Chef will be unable to eat K grams of protein.
// 3
// 4 5
// 7 3 6 5        YES
// 3 4
// 3 10 10        NO 1
// 3 4
// 8 1 1          NO 3
// Example case 1: On the first day, Chef buys 7 grams, eats 5 and stores 2 grams for later. On the second day, he buys 3 grams, so he has 5 grams, which is just enough for the dinner on this day. On the third day, he buys 6 grams, eats 5 and stores 1, and on the fourth day, he buys 5 grams, so he has 6 grams — enough for dinner. In the end, he had enough protein to eat during all four dinners.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int b,c;
	    cin>>b>>c;
	    int arr[b];
	    int left_over=0,diet=1;
	    for(int j=0;j<b;j++){
	        cin>>arr[j];}
	        
	    for(int j=0;j<b;j++){
	        if(left_over+arr[j]<c){
	            cout<<"NO "<<j+1<<endl;
	            diet=0;
	            break;
	        }
	        left_over+=(arr[j]-c);
	        
	    }
	    if(diet==1){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
