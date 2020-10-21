#include <stdio.h> 

int decUzbin(int n) 
{ 
   
    for (int i = 7; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            printf ( "1"); 
        else
            printf ( "0"); 
            
    } 
  
} 
int main() 
{ 
    char dat;
    printf("Ievadiet decimalu skaitli\n");
    scanf("%c",&dat);
    decUzbin((int)dat-48); 
    return(0);
} 
