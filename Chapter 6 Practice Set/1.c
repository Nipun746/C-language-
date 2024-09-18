#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; //j is a pointer pointint -> storing address of i . 
    printf("The address of i is %p",&i);
    return 0;
}