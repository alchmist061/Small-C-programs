#include <stdio.h>

void sumofdigit(int);

int main(){
    int num;
    printf("ENter your number: ");
    scanf("%d",&num);
    sumofdigit(num);
    return 0;
}

void sumofdigit(int x){
    int sum=0;
    while(x>0){
        sum = sum+x%10;
        x /=10;
    }
    if(sum>=10)
        sumofdigit(sum);
    else
        printf("The sum will be %d",sum);
}
