#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

//check if all the characters in alphabet are used at least once or not;;
//function will ignore white spaces and everything thats not a character

bool check(const char *s){
    int arr[26]= {0}, count=26;
    while(*s){
        if(isalpha(*s)){
            int index = tolower(*s) - 'a';
            if(!arr[index]) count--;
            arr[index] = 1;
        }
        s++;
    }
    
    return count==0;
}


int main(){
    char word[35] = "abcdef ghij lmanopqrstu%%%vwxyz";

    printf("%i\n", check(word));
    return 0;
}
