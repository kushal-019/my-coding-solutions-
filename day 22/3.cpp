
// You are given a string 'S' of length 'N'. The string can be encoded using the following rules:
// 1) If the 'i-th' character is a vowel, change it to the next character in the alphabetical sequence. For example, the next character of 'o' is 'p'.
// 2) If the 'i-th' character is a consonant, change it to the previous character in the alphabetical sequence. For example, the previous character of 'h' is 'g'.
// 3) The next character of 'z' is 'a'.
// 4) The previous character of 'a' is 'z'.
// Find the encoded string.

// Example:
// `` N ^ 3 = 4 , ``s^ prime =" cod * e ^ (s*theta)
// Character 'c' gets changed to overline ^ b ^ s
// Character 'o' gets changed to epsilon_{p} .
// Character 'd' gets changed to 'c'.
// Character 'e' gets changed to 'f'.
// Encoded string = "bpcf"

#include <bits/stdc++.h> 
using namespace std;
string encodeString(string &s, int n) 
{
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            s[i]=s[i]+1;
        }
        else{
            s[i]=s[i]-1;
        }
    }
    return s;
}
