// Finally, a COVID vaccine is out on the market and the Chefland government has asked you to form a plan to distribute it to the public as soon as possible. There are a total of N people with ages A1-An There is only one hospital where vaccination is done and it is only possible to vaccinate up to D people per day. Anyone whose age is ≥80 or ≤9 is considered to be at risk. On each day, you may not vaccinate both a person who is at risk and a person who is not at risk. Find the smallest number of days needed to vaccinate everyone.
// 2
// 10 1
// 10 20 30 40 50 60 90 80 100 1			10
// 5 2
// 9 80 27 72 79							3


#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int x,y;
	    cin>>x>>y;
	    int arr[x];
	    int risk=0,norisk=0;
	    for (int j=0;j<x;j++){
	        cin>>arr[j];
	        if(arr[j]>=80||arr[j]<=9){
	            risk++;
	        }
	        else{
	            norisk++;
	        }
	    }
	    if(risk%y==0&&norisk%y==0){
	        cout<<(risk/y)+(norisk/y)<<endl;
	    }
	    else if (risk%y!=0&&norisk%y==0){
	        cout<<((risk/y)+1)+(norisk/y)<<endl;
	    }
	    else if ((norisk%y!=0&&risk%y==0)){
	        cout<<((norisk/y)+1)+(risk/y)<<endl;
	    }
	    else{
	        cout<<((norisk/y)+1)+((risk/y)+1)<<endl;
	        
	    }
	}
	return 0;
}
