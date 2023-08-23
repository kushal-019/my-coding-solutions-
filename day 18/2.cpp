// solve for 2 raise to power N.

#include<bits/stdc++.h>
using namespace std;

long long findpower(int a , int b){

    long long ans ;

    if ( b == 0 ){
        return 1;
    }
    else if( b == 1 ){
        return a;
    }

    ans = findpower( a , b/2 );

    if ( b % 2 == 0 ){  
        return  (ans%1000000007) * (ans%1000000007) ;

    }
    else{
        return  a * (ans%1000000007)  * (ans%1000000007)  ;
    }

}


int main(){

    int a , b ;

    cin >> a >> b ;
    
    long long ans = findpower( a , b );

    cout << ans ;

    return 0;
    
}