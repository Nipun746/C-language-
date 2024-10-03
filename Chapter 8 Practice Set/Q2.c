//Write your own version of strlen function

#include <stdio.h>


int main() {
    char str[]="Harry";
    int i=0;
    char c = str[i]; 
    while(c!='\0'){
         c = str[i];
        i++;
    }
    int count = i-1;
    printf("%d",count);
    return 0;
}