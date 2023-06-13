// you have been given a sorted array consisting of N elements and you are also given an int K. you have to find index of first and last occurence of k.
// return -1 if element not present
// 2
// 6 3
// 0 5 5 6 6 6         -1 -1
// 8 2
// 0 0 1 1 2 2 2 2      4 2
#include <bits/stdc++.h> 
using namespace std;
pair<int, int> firstAndLastPosition(vector<int>& arr, int a, int k){
    int s=0,e=a-1;
    int n=1;
    while(s<=e){
        if(arr[s]==k&&arr[e]==k){
            n=0;
            break;
        }
        else{
            if(arr[s]!=k){
                s++;
            }
            else{
                e--;
            }
        }
    }
        pair<int,int> p;
    if(n!=1){
        p.first=s;
        p.second=e;
    }
    else{
        p.first=-1;
        p.second=-1;
    }
    return p;

}