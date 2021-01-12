#include<stdio.h>
#include<math.h>
void data_s(int k,float a,float b, float prec);
double f(double x, double x1,double prec){
float y;//funjcija (1+x)*exp(x)
 y= (x1-x)/prec;
	return y;
}
int main(){
 int k=0;
 float a,b,x,prec=0.01;

  printf("Lietotājs,lūdzu, ievadi sākuma robežu: ");
  scanf ("%f", &a);

  printf("Lietotājs,lūdzu, ievadi beigas robežu: ");
  scanf ("%f", &b);

  printf("Lietotājs,lūdzu, ievadi precizitāti: ");
  scanf ("%e", &prec);

  x=a;
  while(x<=b){
  k++;//prec reizes
  x+= prec;
  }
 data_s(k,a,b,prec);

}


void data_s(int k,float a,float b, float prec){
int i;
float x[k],y1[k],y2[k],y3[k],y4[k],y5[k];
 FILE *fp = fopen("./derivative.dat", "w");
 fprintf(fp,"\tf(x)\t\tf\'(x)\t\tf\"(x)\t\tf\'(x)\t\tf\"(x)\n");

 for(i=0;i<k;i++){
 if (i==0)
  x[i]=a;
 else
  x[i] = x[i-1] + prec;
 y1[i] = (1+x[i])*exp(x[i]);//vienkarsa funkcija
 y2[i] = (2+x[i])*exp(x[i]);//1 atvasijaums
 y3[i] = (3+x[i])*exp(x[i]);//2 atvasinajums
 }

 for(i=0;i<(k-1);i++)
  y4[i]= f(y1[i],y1[i+1],prec);//diferencesanas 1 atvasinajusm


 for(i=0;i<(k-2);i++)
  y5[i] = f(y2[i],y2[i+1],prec);//diferencesanas 2 atvasinajums
  for(i=0;i<k;i++)
   fprintf(fp,"%13.2f\t%13.2f\t%13.2f\t%13.2f\t%13.2f\n",y1[i],y2[i],y3[i],y4[i],y5[i]);
 fclose(fp);
 printf("Dati saglabati ./derivative.dat");
}
