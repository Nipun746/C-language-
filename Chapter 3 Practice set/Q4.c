#include <stdio.h>

int main(){
    int y ;
    printf("Enter the year: \n");
    scanf("%d",&y);
    if (y%4==0)
    {
        printf("The given year is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
}