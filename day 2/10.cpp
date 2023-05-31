// “You won’t get caught if you hide behind someone.”

// Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.
// Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, K. Many players saw this trick and also started hiding behind Ali.Now, there are N players standing between Gi-Hun and Ali in a straight line, with ith the player having height Hi . Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.

#include <iostream>
using namespace std;

int main() {
     int a;
     cin>>a;
     for(int i=0;i<a;i++){
         int c,d;
         cin>>c>>d;
         int arr[c];
         int count=0;
         for(int j=0;j<c;j++){
             cin>>arr[j];
             if(arr[j]>d){
                 count++;
             }
         }
         cout<<count<<endl;
     }
	return 0;
}
