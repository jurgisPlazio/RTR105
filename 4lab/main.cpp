#include<stdio.h>
#include<math.h>


float f(float x){//funkcija (1+x)*exp(x)
 float y;
 y = (1+x)*exp(x);
 return y;
}
float simson(float a,float b,float precizitate)
{
     int n=2,m=1;
    float h,i1=0.,i2=(b-a)*(f(a)+f(b))/2.;
    while(fabs(i2 - i1)>precizitate){
    m*=2;
    n=2*m;
    h=(b-a)/n;
    i1=i2;
    i2=0.;
    for(int k=1;k<=m-1;k++) i2+=2.*(2*f(a+(2*k-1)*h)+f(a+2*k*h));
    i2+=f(a)+f(b)+4*f(b-h);
    i2*=h/3;
    }
 return i2;
}

float tris(float a,float b,float precizitate)
{
    int n=2;
    float h,i1=0.,i2=(b-a)*(f(a)+f(b))/2.;
    while(fabs(i2 - i1)>precizitate){
        n*=2;
        h=(b-a)/n;
        i1=i2;
        i2=0.;
        for(int k=0;k<n;k++) i2+=h*f(a+(k+0.5)*h);
    }
 return i2;
}

float trap(float a,float b,float precizitate)
{
    int n=2;
    float h,i1=0.,i2=(b-a)*(f(a)+f(b))/2.;
    while(fabs(i2 - i1)>precizitate){
    n*=2;
    h=(b-a)/n;
    i1=i2;
    i2=0.;
    for(int k=1;k<n;k++) i2+=f(a+(k)*h);
    i2+=(f(b)+f(a))/2;
    i2*=h;
 }
 return i2;
}

int main(){
 float a,b,prec;

  printf("Integrāļu aprēķināšana:\n");

  printf("Ievadi sākuma robežu: ");
  scanf ("%f", &a);

  printf("Ievadi beigas robežu: ");
  scanf ("%f", &b);

  printf("Ievadi precizitāti: ");
  scanf ("%e", &prec);


printf("\n integrālis, aprēķināts ar taisnstūru metodi: %.5f\n",tris(a,b,prec));

printf("integrālis, aprēķināts ar Simpsona metodi: %.5f\n",simson(a,b,prec));

printf("integrālis, aprēķināts ar trapeču metodi: %.5f\n",trap(a,b,prec));

}


