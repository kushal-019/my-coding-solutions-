// Sergey has made N measurements. Now, he wants to know the average value of the measurements made.
// In order to make the average value a better representative of the measurements, before calculating the average, he wants first to remove the highest K and the lowest K measurements. After that, he will calculate the average value among the remaining N - 2K measurements.
// Could you help Sergey to find the average value he will get after these manipulations?
// 3
// 5 1
// 2 9 -10 25 1			4.000000
// 5 0
// 2 9 -10 25 1       	5.400000
// 3 1
// 1 1 1				1.000000

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int  b;
	    int c;
	    cin>>b>>c;
	    int  arr[b];
	    for(int j=0;j<b;j++){
	        cin>>arr[j];
	    }
	    sort(arr,arr+b);
	    double sum=0;
	    for(int j=c;j<b-c;j++){
	        sum+=arr[j];
	    }
	   double ans=sum/(b-(2*c));
	      cout<<fixed<<setprecision(6)<<ans<<endl;  
	   
	}
	
	return 0;
}
