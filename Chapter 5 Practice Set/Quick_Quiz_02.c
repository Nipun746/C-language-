//Quick Quiz: Use the library function to calculate the area of a square with side a.
#include <stdio.h>
#include <math.h>
int main(){
    int area;
    int a;
    int power=2;
    printf("Enter length of the square : ");
    scanf("%d \n",&a);
    area = pow( a, power);

    printf("Area = %d \n",area);
    return 0;
}