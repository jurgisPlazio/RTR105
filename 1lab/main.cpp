#include <stdio.h>
#include <math.h>
#include <fstream>
#include <iomanip>
using namespace std;

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
    // printf("%.2f  %.2f  %.2f\n",x,a,S);
     if(k == 999)
     {
         printf("lietotajafunkcija pirmspēdeja vertība − y=mans_exp %.2f =%.2f \n" ,x , S);
     }
    // printf("%8.4f\t%8.2f\n" , a , S);
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
printf("lietotajafunkcija − y=mans_exp %.2f =%.2f \n" ,x , mans_exp(x) );

ofstream mansout("mani_dati.txt");
ofstream out("dati.txt");
for(int i = -20;i<=20;i++)
{
   //  mansout << i << "   "<< mans_exp(i) << endl;
  //   out << i << "   "<< (1+i)*exp(i) << endl;
}
mansout.close();
out.close();

return 0;

}
