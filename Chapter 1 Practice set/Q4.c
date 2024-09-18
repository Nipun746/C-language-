#include <stdio.h>

int main()
{
    int p;
    float r;
    int t;

    printf("Principal %d\n", p);
    
    scanf("%d", &p);
    
    printf("Rate of interest %f\n", r);
    
    scanf("%f", &r);
    
    printf("time(in years) %d\n", t);
    
    scanf("%d", &t);
    
    printf("Simple Interest is %f\n", p * r * t);

    return 0;
}