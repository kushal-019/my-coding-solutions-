// Chef categorises an instagram account as spam, if, the following count of the account is more than 10 times the count of followers.Given the following and follower count of an account as X and Y respectively, find whether it is a spam account.

#include <iostream>
using namespace std;

int main() {
    int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int n,m;
	    cin>>n>>m;
	    if(n<=m*10){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
