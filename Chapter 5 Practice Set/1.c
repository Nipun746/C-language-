//Functions 
#include <stdio.h>

//function prototype 
int sum(int,int);

//funtion definition 
int sum(int x,int y ){
    printf("The sum is %d  \n",x+y);
    return x+y;
}
int main(){
    int a ;
    int b ;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);

    sum(a,b); //Function call 

    int a2 ;
    int b2 ;
    printf("Enter a2 ");
    scanf("%d",&a2);
    printf("Enter b2 ");
    scanf("%d",&b2);
    sum(a2,b2);
    
    sum(12,1245697);
    return 0;
}