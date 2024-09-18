//Write a program to sum first ten natural numbers using while loop.
#include <stdio.h>

int main(){
    int i=1 ;
    int sum ; 
    while (i<=10)
    {
       sum += i++;
    }
    printf("%d",sum);
    return 0;
}