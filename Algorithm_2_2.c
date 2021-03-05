//#Algorithm to find solution of quadratic equation
#include<stdio.h>
#include<math.h>
int main(){

float a,b,c,x1,x2,d;

printf("Enter the value of a: ");
scanf("%f",&a);
printf("Enter the value of b: ");
scanf("%f",&b);
printf("Enter the value of c: ");
scanf("%f",&c);
d=(b*b)-(4*a*c);
printf("value of d: %f\n",d);

if(d>0)
{
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("Answer is X1: %f and X2: %f\n",x1,x2);
}
else if(d==0){
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("Answer is X1: %f and X2: %f\n",x1,x2);
    printf("Unique solution of X\n");
}
else{
    printf("No real solution\n");
}
return 0;
}
