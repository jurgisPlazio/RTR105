#include <stdio.h>
#include <math.h>

int main(){

float a,b,c,prec,x,sakne;
int n=0;

printf("Ievadiet a vertibu ");
scanf("%f",&a);
printf("Ievadiet b vertibu ");
scanf("%f",&b);
printf("Ievadiet c vērtību izteinsmei (1+x)*exp(x)=c   ");
scanf("%f",&c);
printf("Ievadiet precizitāti ");
scanf("%f",&prec);

float vid=a;

while((b-a)>=prec){
    n++;
    vid=(a+b)/2;

    if((1+vid)*exp(vid)==c){
        break;
    }
    else if(((1+vid)*exp(vid)-c)*((1+a)*exp(a)-c)<0){
        b=vid;
    }
    else a=vid;
}

sakne=(1+vid)*exp(vid);

printf("\nSakne (1+x)*exp(x)=%.2f izteiksmei ir   %f\n",c,vid);
printf("f(%.2f)=%f\n",vid,sakne);
printf("Nepieciešmo literāciju skaits %d",n);

return 0;
}
