
// Chef is fond of burgers and decided to make as many burgers as possible.Chef has A patties and B buns. To make 1 burger, Chef needs 1 patty and 1 bun.Find the maximum number of burgers that Chef can make.

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int b,c;
	    cin>>b>>c;
	    if(b>c){
	        cout<<c<<endl;
	    }
	    else{
	        cout<<b<<endl;
	    }
	}
	return 0;
}
