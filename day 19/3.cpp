// quick sort 

#include<bits/stdc++.h>
using namespace std;

    int find(int* arr , int s ,int e){

    int mainelement = arr[s];
    int count = 0;
    for(int i = s ; i <= e ; i++){
        if(arr[i]<mainelement){
            count++;
        }
    }
    int index = s + count;
    swap(arr[s] , arr[index]);

    int i = s , j =e;
    while(i<=index && j>=index){
        while(arr[i]<arr[index]){
            i++;
        }
        while(arr[j]>arr[index]){
            j--;
        }
         swap(arr[i++] , arr[j--]);
    }
    return  index ;
    }


void quicksort(int* arr , int start , int end){
    // base condition
    if (start >= end) {
        return ;
    }
    
    int pivot = find(arr , start , end);

// recursive 

    quicksort(arr ,start, pivot -1);

// recursive 
    quicksort(arr , pivot + 1 , end);

    return ;
}

int main(){

    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    quicksort(arr , 0 , a);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}