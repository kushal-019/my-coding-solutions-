// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:

// Input: digits = ""
// Output: []
// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void makecombos(string s , string keypad[] , vector<string>& solution , int index , int sz ,string ans){
        if(index>=sz){
            solution.push_back(ans);
            return;
        }
        int d = s[index]  - '0';
        string value = keypad[d];
        for(int i=0 ; i<value.length() ; i++){
            ans.push_back(value[i]);
            makecombos(s ,keypad , solution , index+1 , sz , ans );
            ans.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        
        string CharArray[10] = {"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int StartIndex = 0;
        int x =digits.length();
        vector<string> solution ; 
        if(x<1){
            return solution;
        }
        string answer ;
        makecombos(digits , CharArray , solution , StartIndex , x , answer );
        return solution;

    }
};