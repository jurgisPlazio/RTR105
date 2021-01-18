#include <stdio.h>
#include <math.h>
#include <string.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d \n",arr[i]);

}
 int average(int a[], int n)
    {

        // Find sum of array element
        int sum = 0;

        for (int i = 0; i < n; i++)
            sum += a[i];

        return sum / n;
    }
    double findMedian(int a[], int n)
{

    if (n % 2 != 0)
         return (double) a[n / 2];

    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}
void most_occurred_number(int nums[], int size)
{
  int max_count = 0;

  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count && max_count >= 2 )
   {
       printf("Moda : %d\n",nums[i]);
   }

  }
 }
int main(){

int n=1;
char type;

printf("Iveleties burtus vai skaitļus(c vai i)");
scanf("%c",&type);
switch(type)
{

case 'i':{
printf("Ievadiet skaitļu daudzumu n:");
scanf(" %d",&n);
int mas[n];
for(int i=0;i<n;i++)
{
    printf("ievaidier skaitli ");
    scanf(" %d",&mas[i]);
}

bubbleSort(mas,n);
printf("Min vertiba : %d\n",mas[0]);
printf("Max vertiba : %d\n",mas[n-1]);
printf("Vid vertiba : %d\n",average(mas,n));
printf("Medianas vertiba : %.2f\n",findMedian(mas,n));
most_occurred_number(mas,(sizeof(mas) / sizeof(mas[0])));
printArray(mas,n);

break;
}
case 'c':
fflush(stdin);
printf("Ievadiet simbolu rindu\n");
char str[200];
fgets(str, 200, stdin);
int len = strlen(str);
int masc[len-1];
for(int ie = 0 ; ie<len-1;ie++)
{

    masc[ie]= (int)str[ie];

}
bubbleSort(masc,len-1);
printf("Min vertiba : %c\n",masc[0]);
printf("Max vertiba : %c\n",masc[len-2]);
printf("Vid vertiba : %c\n",masc[(len-1)/2]);
printf("Medianas vertiba : %.2f\n",findMedian(masc,len));
most_occurred_number(masc,(sizeof(masc) / sizeof(masc[0])));
for(int ie = 0 ; ie<len-1;ie++)
{
    //printf("%d\n",(int)str[ie]);
   printf("%c\n",masc[ie]);
}
break;
}
return 0;
}
