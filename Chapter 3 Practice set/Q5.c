#include <stdio.h>


int main(){
    char c;
    printf("enter the word: \n");
    scanf("%c" ,&c);
    if ( c >= 97 && c<=122){
        printf("The character is lowercase \n");

    }

    else{
    printf("The character is not lowercase");
    }
    

    return 0;
}