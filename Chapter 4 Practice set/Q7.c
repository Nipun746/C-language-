//Write a program to calculate the sum of the numbers occurring in the 
//multiplication table of 8. (consider 8 x 1 to 8 x 10). 
#include <stdio.h>

int main(){
    int i ;
    int n = 8;
    int sum = 0;
    int x; 
     for (i = 1; i<=10; i++)
    {
        printf("%d X" ,n); printf(" %d" ,i); printf(" = %d \n",n*i);
        x =n*i;
        sum += x;
    }
    
   printf("the sum of of the numbers occurring in the multiplication table of 8 is %d." ,sum);

    return 0;
}