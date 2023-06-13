// you are given 2 arrays A,B of size N , M. both arrays are sorted in non-decending order. you have to find intrersection if two arraysin an array that consist of all the common elements occuring in both arrays 
// 2
// 6 4
// 1 2 2 2 3 4         2 2 3
// 2 2 3 3
// 3 2
// 1 2 3               3
// 3 4

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0;
	int j=0;
	vector <int> answer;
	while(i<n&&j<m){
		if(arr1[i]==arr2[j]){
			answer.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else{
			i++;
		}
	}
	return answer;
}