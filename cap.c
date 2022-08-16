//C program to change a string to uppercase

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 102

char *capital(char *);


int main(int argc, char **argv){
    char *str;
    str = (char *) malloc(sizeof(char)*100+1);
    puts("Enter your string: ");
    fgets(str,LIMIT,stdin);
    printf("your string in capital is:\n%s",capital(str));
    free(str);
    return 0;
}

char *capital(char *arr){
    int b=0;
    while(*(arr+b) != '\0'){
        if(*(arr+b)>=97 && *(arr+b) <= 122)
            *(arr+b) -= 32;
        else
            *(arr+b) = *(arr+b);
        b++;
    }
    return arr;
}


