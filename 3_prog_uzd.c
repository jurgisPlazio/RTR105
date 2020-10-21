/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

   


int augosa (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int dilstosa(const void * a, const void * b){
   return ( *(int*)b - *(int*)a );
}

int n,s,skaitlu_daudzums;
int main () {
   printf("Cik skaitļus ievadisiet \n");
   scanf("%d", &skaitlu_daudzums);
   
   int values[skaitlu_daudzums] ;
for( n = 0 ; n < skaitlu_daudzums; n++ ) {
    printf("Ievadiet skaitli %d: ",n);
   scanf("%d", &values[n]);
   }
   
    printf("Augoša = 1 dilstoša = 0 \n");
    scanf("%d",&s);
 
    printf("Pirms kartošanas: \n");
   for( n = 0 ; n < skaitlu_daudzums; n++ ) {
      printf("%d ", values[n]);
   }
 if(s == 1)
 {
qsort(values, skaitlu_daudzums, sizeof(int), augosa);
    }
    else
    {
    qsort(values, skaitlu_daudzums, sizeof(int), dilstosa);
}
   printf("\nPēc kartošanas: \n");
   for( n = 0 ; n < skaitlu_daudzums; n++ ) {   
      printf("%d ", values[n]);
   }

 return(0);

}



  

   
  
  
