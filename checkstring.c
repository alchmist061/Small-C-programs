/* returns 1 if the strings are 1 to 1 equal else 0 if they aren't*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
const int size = 100;

bool stringcompare(char *, char *);

int main(){
    char *str_1,*str_2;
    str_1 = (char *) malloc(sizeof(char)*size +1);
    str_2 = (char *) malloc(sizeof(char)*size +1);
    printf("Enter your first string: ");
    fgets(str_1,size,stdin);
    printf("Enter your second string: ");
    fgets(str_2,size,stdin);
    printf("%d",stringcompare(str_1, str_2));
    free(str_1);
    free(str_2);
    return 0;
}

bool stringcompare(char *a, char *b){
    int d,count;
    if(strlen(a)!=strlen(b))
        return false;
    else{
        for(d=0;d<strlen(a);d++)
            if(d[a] == d[b])
                count++;
        if(count == strlen(a))
            return true;
        else return false;
    }   
}
