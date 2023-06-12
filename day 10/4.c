// Chef invented a modified wordle.
// There is a hidden word S and a guess word T, both of length 5. Chef defines a string M to determine the correctness of the guess word. For the ith index:If the guess at the ith index is correct, the ith character of M is G. If the guess at the ith index is wrong, the ith character of M is B.Given the hidden word S and guess T, determine string M.
// 3
// ABCDE       BBGBB
// EDCBA
// ROUND       GBBBB
// RINGS
// START       GGBBG
// STUNT

#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        char s[100],t[100],m[100];
        scanf("%s",s);
        fflush(stdin);
        scanf("%s",t);
        int f=strlen(t);
        for (int j=0;j<f;j++){
            if (s[j]==t[j])
            m[j]='G';
            else
            m[j]='B';
        }
        for (int j=0;j<f;j++){
            printf("%c",m[j]);
        }
        printf("\n");
    }
	return 0;
}