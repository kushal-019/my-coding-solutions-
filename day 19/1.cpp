// merge sort using recurssion.

#include<bits/stdc++.h>
using namespace std;

void sorting(int *arr, int size){
    // cout<<"called sort"<<" ";
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    if (size <= 1){
        
        return ;
    
    }

    for(int i = 0 ; i < size-1 ; i++){
        
        if( arr[i] > arr[i+1] ){
        
        swap( arr[i] , arr[i+1] );
        
        }
    
    }

    sorting(arr , size-1);
    return ;
}

void mergesort(int *arr , int size){
    
    if ( size == 1 ){
    
        return ;
    
    }

    // cout<<"called mergesort"<<" ";
    // for(int i=0;i<size ;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    

    mergesort(arr ,size/2 );

    mergesort(arr+(size/2) , size/2 );


    sorting(arr,size);
    

}



int main(){

    int a ;
    
    cin >> a;
    
    int arr[a];

    for (int i = 0; i < a; i++){
    
        cin >> arr[i];
    
    }

    mergesort( arr+0 , a);

    for(int i = 0; i < a; i++){
   
        cout << arr[i] << " ";
   
    }

}