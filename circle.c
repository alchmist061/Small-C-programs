#include <stdio.h>
float sq(float a){return a*a;}
const float acceptance = .3;
int main(){
    const int r = 4;
    float x,y;
    for(x=-r;x<=r+0.2;x+=0.2){
        for(y=-r;y<=r;y+=0.1){
            if(sq(x)+sq(y)>=sq(r)-acceptance&&sq(x)+sq(y) <=sq(r)+acceptance) printf("x");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
//key-note from the program
/* x += will make it longer and y+= will stretch it*/
//sq(r) + const gives us a range of acceptance of points (necessary, feels great to play with it)

