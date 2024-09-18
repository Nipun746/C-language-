// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2. 

#include <stdio.h>
float Force(int);
float Force (int m){
    printf("The force of attraction on a body of mass m exerted by earth is %f", (m*9.8));
    return m*9.8 ;
}
int main(){
    int a ;
    
    printf("Mass of given body is : \n");
    scanf("%d",&a);
    Force(a);
    return 0;
}