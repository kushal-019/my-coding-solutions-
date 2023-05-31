// Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

// We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

// You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.


#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	check:
	for(int i=0;i<a;i++){
	    int b;
	    cin>>b;
	    char str[b];
	    cin>>str;
	    int d=0;
	    int count=0;
	    for(int i=0;i<b;i++){
	        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
	            count=0;
	        }
	        else{
	            count++;
	        }
	    
	    if (count>=4){
	        cout<<"NO"<<endl;
	        d=1;
	        break;
	    }
	    
	  }
	  if(d!=1){
	        cout<<"YES"<<endl;
	       // cout<<str<<endl;
	  }
	    
	}
	return 0;
}
