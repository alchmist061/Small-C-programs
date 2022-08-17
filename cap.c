/* chanegs the whole string to uppercase but preserves the main input string*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT 102

char *capital(const char *);

int main(int argc, char **argv){
    char *str;
    str = (char *) malloc(sizeof(char)*LIMIT+1);
    puts("Enter your string: ");
    fgets(str,LIMIT,stdin);
    printf("\nYour string in capital is:\n%s",capital(str));
    printf("\nYour original string is:\n%s",str);
    free(str);
    return 0;
}

char *capital(const char *new){
    char *base;int i=0;
    base = malloc(strlen(new)+1);
    if(strcpy(base,new) == NULL)
        printf("Error with strcpy");
    while(*base != '\0'){
        if(*base>=97 && *base <= 122)
            *base -= 32;
        base++,i++;
    }
    return (base-i);
    free(base);
}

