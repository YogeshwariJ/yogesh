#include <stdio.h>
void stack(int num,char frompeg,char topeg,char auxpeg){
    if(num==1){
        printf("\nMoving disc 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    stack(num-1,frompeg,auxpeg,topeg);
    printf("\nMoving disc %d from peg %c to peg %c",num,frompeg,topeg);
    stack(num-1,topeg,frompeg,auxpeg);
}

int main(){
    int num;
    scanf("%d",&num);
    stack(num,'A','C','B');
    return 0;
}
