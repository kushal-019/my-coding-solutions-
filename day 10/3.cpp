// There are 101 citizens in Chefland. It is election time in Chefland and 3 parties, A,B, and C are contesting the elections. Party A receives​ A votes, party B receives B votes, and party C receives C votes. The constitution of Chefland requires a particular party to receive a clear majority to form the government. A party is said to have a clear majority if it receives strictly greater than 50 votes.
// If any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int A,B,C;
	    cin>>A>>B>>C;
	    if(A>50){
	        cout<<"A"<<endl;
	    }
	    else if(B>50){
	        cout<<"B"<<endl;
	    }
	    else if(C>50){
	        cout<<"C"<<endl;
	    }
	    else{
	        cout<<"NOTA"<<endl;
	    }
	}
	return 0;
}
