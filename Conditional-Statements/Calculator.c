//Write a C program to calculate sum of two numbers if the user enters '+', difference of two numbers if the user enters '-', product of two numbers if the user enters '*', quotient of two numbers if the user enters '/'. 

#include <stdio.h>
int main(){
float num1,num2;
char operator;
printf("Enter number 1: ");
scanf("%f",&num1);
printf("Enter number 2: ");
scanf("%f",&num2);
printf("Enter an operator: ");
scanf("\n%c",&operator);

if(operator=='+'){
printf("sum: %f", num1+num2);
}
else if(operator=='-'){
printf("difference: %f", num1-num2);
}
else if(operator=='*'){
printf("product: %f", num1*num2);
}
else if(operator=='/'){
printf("quotient: %f", num1/num2);
}
else{
printf("Please enter a valid input");
}
return 0;
}

