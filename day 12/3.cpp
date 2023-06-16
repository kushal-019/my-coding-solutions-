// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

#include <bits/stdc++.h> 
using namespace std;
class Solution {
private:
bool validch(char ch){
    if((ch >= 'a' && ch <='z' ) || (ch >= 'A' && ch <='Z') || (ch <= '9' && ch >= '0')){
        return 1;
        }
    else{
        return 0;
    }
}
char reducetolowercase(char ch){
    if((ch <= 'z' && ch >= 'a')||(ch <= '9' && ch >= '0')){
        return ch;
    }
    else{
        ch = ch + 'a' - 'A';
        return ch; 
    }
}
bool checkpalindrome(string s,int f){
    int start=0;
    int end=f-1;
    while(start<end){
        if(s.at(start)!=s.at(end)){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.length();i++){
            if(validch(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.length();i++){
            temp.at(i)=reducetolowercase(temp.at(i));
        }
        if(checkpalindrome(temp , temp.length())){
            return 1;
        }
        else{
            return 0;
        }
    }
};