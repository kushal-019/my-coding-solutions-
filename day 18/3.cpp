// bubble sort using recurssion.

#include<bits/stdc++.h>
using namespace std;

void sorting(int *array ,int last){

    if(last == 0 || last == 1){

        return ;

    }

    for( int i=0; i < last-1; i++){

        if(array[i]>array[i+1]){ 

            swap(array[i],array[i+1]);
        
        }
    }
    
    sorting(array,last-1);

    return ;

}

int main(){

    int a;

    cin >> a ;
    
    int arr[a];

    for (int i = 0; i < a; i++){
       
        cin >> arr[i] ;
    
    }

    sorting( arr , a);

    for(int i=0;i<a;i++){
    
        cout << arr[i] << " ";
    
    }
    
    cout << endl;
    
    return 0;

}