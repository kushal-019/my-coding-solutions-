// Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!
// Help chef find which type of doll is missing..
// input 
// 1
// 3
// 1 
// 2
// 1

// output
// 2

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    sort(arr,arr+n);
	    int j=0;
	    while(j<n){
	        if(arr[j]==arr[j+1]){
	            j=j+2;
	        }
	        else{
	            cout<<arr[j]<<endl;
	            j++;
	        }
	    }
	}
	return 0;
}
