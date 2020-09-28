#include <stdio.h>
#include <string.h>
int main(){
printf("Helo world\n");
int a,b;
char ste[] = "helo world";

for(a = 1;a<= 10;a++)
{
for(b = 1;b<= a;b++)
{
printf(ste[b]);
}
printf("\n");
}

return(0);
}
