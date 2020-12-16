#include <stdio.h>
#include <math.h>
 double mans_exp ( double x ){
 double a , S ,R;
 int k=0;
 a = (1+x)*pow(x,k)/(1.);
 S = a;
 while(k<=1000)
 {
     k++;
     R = x/k;
     a = a*R;
     S = S+a;
     if(k == 999)
     {
         printf("lietotajafunkcija pirmspēdeja vertība − y=mans_exp %.2f =%.2f \n" ,x , S);
     }
   // printf("%.2f\t%8.2f\t%8.2f\n" ,x , a , S);
 }
 return S;
 }

int main(){
double x,y,yy;
printf("(1+x)*exp(x) aprekinasana: \n");
printf("Lūdzu ievadiet argumentu x = ");
scanf("%lf",&x);
y = (1+x)*exp(x);

printf("");
printf("                         1000                             \n");
printf("                       _________                          \n");
printf("                       \\                               k  \n");
printf("                        \\           (1   +    x)  *   x   \n");
printf("         (1+x)*exp(x) = >         __________________     \n");
printf("                        /                                 \n");
printf("                       /_________           k!            \n");
printf("                          k=0                             \n");
printf("                                                          \n");
printf("                                                          \n");
printf("                                            x             \n");
printf("            Rekurences reizinatajs:    ____________       \n");
printf("                                                          \n");
printf("                                            k             \n");
printf("standarta funkcija− y= %.2f =%.2f \n" ,x , y );
yy = mans_exp(x);
printf("lietotajafunkcija − y=mans_exp %.2f =%.2f \n" ,x , yy );
}
