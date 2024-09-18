//Repeat 8 using while loop.
#include <stdio.h>

int main(){
    int product =1  ;
    int n ;
    int i = 1;
    printf("enter n  ");
    scanf("%d",&n);
    while (i <= n)
    {
         product *= i;
     i++;
    }
   
    printf("%d",product);
    return 0;
}