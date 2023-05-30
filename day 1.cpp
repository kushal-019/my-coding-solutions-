// Devu has n weird friends. Its his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on dith day.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int nr = n;
	    int d[n];
	    for(int i = 0; i<n; i++){
	        cin>>d[i];
	    }
	    sort(d,d+n);
	    for(int i = 0; i<n; i++){
	        if(d[i]==d[i+1])
	          nr--;
	    }
	    cout<<nr<<endl;;
	}
	return 0;
}
