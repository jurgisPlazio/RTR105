#include <stdio.h>
#include <math.h>

int main(){

float a,b,c,prec,x,delta_x;
int n=0;

printf("Ievadiet a vertibu ");
scanf("%f",&a);
printf("Ievadiet b vertibu ");
scanf("%f",&b);
b=b*M_PI;
printf("Ievadiet precizitāti ");
scanf("%f",&prec);
x=a;

while(x<b)
    {
printf("%10.2f  ",((1+x)*exp(x)));

printf("%10.2f  ",(2*exp(x)+exp(x)*x));
printf("%10.2f\n",(exp(x)*x+3*exp(x)));
printf("%10.2f  ",(exp(x+prec)-exp(x))/prec);

x+=prec;
}





return 0;
}
