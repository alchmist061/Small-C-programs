#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char *concat(char *, char *);

int main(){
    char *a,*b;
    a = malloc(MAX +1);
    b = malloc(MAX +1);
    puts("Enter your first String:");
    fgets(a,MAX,stdin);
    puts("Enter your second String:");
    fgets(b,MAX,stdin);
    printf("String concat results in:\n\n%s",concat(a,b));
    free(a);
    free(b);
    return 0;
}

char *concat(char *a, char *b){
    int i,j;
    char *c =malloc(strlen(a)+strlen(b)-1);
    for(i=0;i[a] != '\n';i++)
        i[c] = i[a];
    for(j=0;j[b] != '\n';j++,i++)
        i[c] = j[b];
    i[c] = '\0';
    return c;
    free(c);
}

