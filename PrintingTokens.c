#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    
    scanf("%[^\n]", s);
    
    //Write your logic to print the tokens of the sentence here.
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]==' '){
            printf("\n");
        }
        else {
        printf("%c",s[i]);
        }
    }
    return 0;
}
