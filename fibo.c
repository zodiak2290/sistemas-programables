#include <stdio.h>
#include <iostream>
int main ()
{
 int x;
 int i;
 int n=1;
 int suma=0;
 int res=0;
 printf("Dame numero\n");
 scanf("%d" ,&x);
 printf("0 \n");
 for (i=0;i<x;i++)
   {
    res=suma+n;
    suma=n;
    n=res;
    printf("%i\n",suma);
   }
 return 0;
}
