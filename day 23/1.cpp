// Given an array of 'N' unique integers, the distance between any two integers in the array is the absolute difference between them.

// Let 'X' be the minimum of the distances between all possible pairs in the array. Find the number of pairs with the absolute distance between them is equal to 'X'. EXAMPLE:

// Input: ^ * N' = 3 and 'ARR' = [- 3, 0, 3]

// Output: 2

// There are two pairs (-3, 0) and (0, 3) having the distance between them as 3, and this is the minimum possible. The distance between (- 3, 3) is 6 which is not the minimum possible.


#include <bits/stdc++.h> 
using namespace std;

int minimumDistancePairs(int n, vector<int>& arr) {
    int count=0;
    int diff;
    int min = 9999;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                diff = arr[j]-arr[i];
            }
            else{
                diff  = arr[i]-arr[j];
            }
            if(diff<min){
                min= diff;
                count=1;
            }
            else if(diff==min){
                count++;
            }
        }
    }
    return count;
}
