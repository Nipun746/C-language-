#include <stdio.h>

int main(){
    int income;
    printf("Enter your income \n");
    scanf("%d" ,&income);
    if (income<=250000)
    {
        printf("you dont have to pay taxes stay happy ");
    }
    if (500000>income>=250000)
    {
        printf("You have to pay tax of %d", (income/100)*5);
    }
    if (1000000>income>=500000)
    {
        printf("You have to pay tax of %d", (income/100)*20);
    }
    if (income>=1000000)
    {
        printf("You have to pay tax of %d", (income/100)*30);
    }
    
    return 0;
}