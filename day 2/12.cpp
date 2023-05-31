// Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.The first thing Chefu wanted to do was to calculate the result of his homework — the sum of A and B, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.
// Digits are formed using matches in the following way:

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int x,y;
	    cin>>x>>y;
	    int count=0;
	    int z=x+y;
	    while(z>0){
	        int g=z%10;
	        switch (g){
	        case 0:
	        case 6:
	        case 9:
	            count+=6;
	            break;
	        case 1:
	            count+=2;
	            break;
	        case 2:
	        case 3:
	        case 5:
	            count+=5;
	            break;
	        case 4:
	            count+=4;
	            break;
	        case 7:
	            count+=3;
	            break;
	        case 8:
	            count+=7;
	            break;
	       }
	        z/=10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
