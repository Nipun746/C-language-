#include <stdio.h>

int main(){
    int n;
    int a=0;
    printf("Enter n \n");
    scanf("%d",&n);
    do
    {
       printf("%d \n" ,a);
       a++;
    } while (a<=n) ;
    
    return 0;
}