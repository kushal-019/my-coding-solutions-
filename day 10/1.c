// Mario was going to gift Princess Peach a string S of even length N.Mario was clumsy and thus, broke the string in the middle. He now has two strings A and B such that A=S[1, N/2] and B=S[N/2+1,N].Mario is not sure about the order in which he should join the strings A and B to get the string S. Thus, he joins the strings in any random order. Find whether it is guaranteed that Mario will get the same string S if he joins the strings A and B in any order.Note that S[L,R] denotes a substring of string S starting at index L and having a length (R−L+1).
// 4
// 6
// abcabc	yes
// 6
// abcdef	no
// 4
// aaaa	yes
// 4
// baab	no


#include <stdio.h>
#include <string.h>
int main(void) {
	int a,b;
	char str[1000],str1[500]= "",str2[500] = "";
	scanf("%d",&a);
	while(a--){
	    scanf("%d",&b);
	    int len = b;
	    int mid = len/2;
	    scanf("%s",&str);
	    for(int i =0 ;i<mid;i++){
	        str1[i] = str[i]; 
	    }
	     str1[mid] = '\0';
	    for(int i =0; i<len - mid;i++){
	        str2[i] = str[i + mid];
	    }
	    str2[len - mid] = '\0';
	    
	    int result = strcmp(str1,str2);
	    if(result == 0){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    
	}
	return 0;
}
	  
	 