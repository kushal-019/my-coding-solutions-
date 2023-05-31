// Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. Kepler's 3rd law is The Law of Periods, according to which:
// The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit.
// You are given the Time periods (t1,t2) and Semimajor Axes (r1,r2) of two planets orbiting the same star.Please determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same. Print "Yes" (without quotes) if the law is satisfied, else print "No" 

#include<bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(pow(w,2)/pow(y,3)==pow(x,2)/pow(z,3)){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
