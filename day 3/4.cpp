// Find the minimum number of operations required to make all elements of the array equal
// 3
// 3
// 1 2 3       2
// 4
// 2 2 3 1     2
// 4
// 3 1 2 4     3

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        int arr[b];
        for(int j=0;j<b;j++){
            cin>>arr[j];
        }
        int count=1;
        int out=0;
        sort(arr,arr+b);
        for(int j=0;j<b-1;j++){
            if(arr[j]==arr[j+1]){
                count++;
            }
            else{
                count=1;
            }
            out=max(out,count);
        }
        cout<<b-out<<endl;
        
    }
	return 0;
}
