// Chef is playing a game with this sequence. In this game, he may perform the following operation any number of times (including zero): Choose an arbitrary pair of elements from the sequence such that their sum is even, delete these two elements from the sequence and insert their sum into the sequence instead.
// 2
// 2
// 1 2				2
// 5
// 7 4 3 2 6		1

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int s;
	    cin>>s;
	    int arr[s];
	    int sum=0;
	    for(int j=0;j<s;j++){
	        cin>>arr[j];
	        sum=sum+arr[j];
	    }
	   
	    if(sum%2==0){
	        cout<<1<<endl;
	    }
	    else if(s==1){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	    
	}
	return 0;
}
