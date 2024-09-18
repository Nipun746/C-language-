// Write a function to convert Celsius temperature into Fahrenheit. 
#include <stdio.h>
float converter(int a);

float converter(int a ){
 return (a*9.0/5.0) + 32.0;
}
int main(){
    int a ;
    printf("Enter temperature in celius \n");
    scanf("%d",&a);

    printf("The temperature in Fahrenheit is %f" ,converter(a));
    return 0;
}