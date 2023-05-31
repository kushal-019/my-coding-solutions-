// Apple considers any iPhone with a battery health of 80% or above, to be in optimal condition.Given that your iPhone has X% battery health, find whether it is in optimal condition.

#include <iostream>
using namespace std;

int main() {
	int b;
	cin>>b;
	for(int i=0;i<b;i++){
	    int c;
	    cin>>c;
	    if(c>=80){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
