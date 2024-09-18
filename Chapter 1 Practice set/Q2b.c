#include <stdio.h>
#include <math.h>
int main(){
    float pie = 3.14 ; 
    int radius ;
    int Height ;
    printf("Radius\n");
    scanf("%d" ,&radius);
    printf("Height\n");
    scanf("%d" ,&Height);
    printf("Volume of cylinder is %f",pie*radius*radius*Height);
    return 0;
}