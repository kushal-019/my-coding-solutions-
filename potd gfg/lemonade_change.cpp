// You are an owner of lemonade island, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by given array bills[]). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

// NOTE: At first, you do not have any bill to provide changes with. You can provide changes from the bills that you get from the previous customers.

// Given an integer array bills of size N where bills [ i ] is the bill the ith customer pays, return true if you can provide every customer with the correct change, or false otherwise.

// Example 1:

// Input:
// N = 5
// bills [ ] = {5, 5, 5, 10, 20}
// Output: True
// Explanation: 
// From the first 3 customers, we collect three $5 bills in order.
// From the fourth customer, we collect a $10 bill and give back a $5.
// From the fifth customer, we give a $10 bill and a $5 bill.
// Since all customers got correct change we return true.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &arr) {
        int count_5=0;int count_10=0;
        if(arr[0]!=5){
            return 0;
        }
       for(int i=0;i<N;i++){
           if(arr[i]==5){
               count_5++;
           }
           if(arr[i]==10){
               count_10++;
               if(count_5>=1){
               count_5--;}
               else{
                   return 0;
               }
           }
           if(arr[i]==20){
               if(count_10>=1 && count_5>=1 ){
                    count_10--;
                   count_5=count_5-1;
               }
               else if(count_5>=3 ){
                    count_5=count_5-3;}
               else{
                   return 0;
               }
           }
       }
       return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends