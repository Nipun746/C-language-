#include <stdio.h>

int main(){
    int a ,b,c,d; 
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b \n");
    scanf("%d",&b);
    printf("enter c \n");
    scanf("%d",&c);
    printf("enter d \n");
    scanf("%d",&d);
  if (a>b && a>c && a>d)
  {
 printf("%d is the greatest number" ,a);
  }
   if (b>a && b>c && b>d)
  {
 printf("%d is the greatest number" ,b);
  }
   if (c>b && c>a && c>d)
  {
 printf("%d is the greatest number" ,c);
  }
   if (d>b && d>c && d>a)
  {
 printf("%d is the greatest number" ,d);
  }
  
    
    
    return 0;
}