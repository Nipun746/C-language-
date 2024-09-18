// Write a program to print multiplication table of a given number n.
#include <stdio.h>

int main(){
    int n; 
    int i;
    printf("Enter a number : \n" ,n);
    scanf("%d",&n);
for ( i = 1; i <=10; i++)
{
    printf("%d X" ,n); printf(" %d" ,i); printf(" = %d \n",n*i);
}

    return 0;
}