#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char arr[20][20]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
    for(int i=a;i<=b;i++)
    {
        if(i<=9){
            printf("%s\n",arr[i-1]);
        }
        else{
            (i%2==0)?printf("even\n"):printf("odd\n");
        }
    }
    
  	

    return 0;
}

