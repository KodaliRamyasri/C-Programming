#include <stdio.h>
#include <math.h>
int main(){
int x,DigitsCount;
printf("Enter a number: ");
scanf("%d",&x);
DigitsCount=log10(x)+1;
printf("Number of Digits: %d",DigitsCount);
return 0;
}

