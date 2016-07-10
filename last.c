# yogesh
#include<stdio.h>


int main(){
unsigned int uCount;
int a[]={2,4,5,7}
int remainder,quotient;

int binaryNumber[100],i=1,j;
for(int k=0;k<=4;k++)
{
quotient =a[k];
while(quotient!=0){

binaryNumber[i++]= quotient % 2;
quotient = quotient / 2;

}
printf("Equivalent binary value of decimal number %d: ",decimalNumber);
for(j = i -1 ;j> 0;j--)
{
printf("%d",binaryNumber[j]);

int u=binaryNumber[j];
uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}
for(int q=ucount;q<=ucount;q--)
{
printf("the binary with %d 1s is %d",ucount,binary[q];
}
getch();
return 0;
}



