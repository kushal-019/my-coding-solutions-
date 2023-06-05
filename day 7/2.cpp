// Chef has a number D containing only digits 0's and 1's. He wants to make the number to have all the digits same. For that, he will change exactly one digit, i.e. from 0 to 1 or from 1 to 0. If it is possible to make all digits equal (either all 0's or all 1's) by flipping exactly 1 digit then output "Yes", else print "No" (quotes for clarity)
// 2
// 101		Yes
// 11		No


#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    string b;
	    cin>>b;
	    if(b=="0"){
	        cout<<"Yes"<<endl;
	    }
	    else{
	    int count0=0,count1=0;
	    for(int j=0;j<b.size();j++){
	        int z=b[j];
	        if(z=='0'){
	            count0++;
	        }
	        else{
	            count1++;
	        }
	    }
	    if(count1==1||count0==1){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }}
	}
	return 0;
}
