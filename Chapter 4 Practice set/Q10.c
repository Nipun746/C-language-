//Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>

int main(){
    int n ;
    int prime = 0;
    printf("Enter the number n ");
    scanf("%d",&n);
    for (int i = 2 ; i < n ; i++)
    {
        if (n%i==0)
        {
            prime=1;
        }
        
    }
    if (prime)
    {
        printf("%d is not a prime number \n" ,n);
    }
    else{
        printf("%d is a prime number \n" ,n);
    }
    return 0;
}