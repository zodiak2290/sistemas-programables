#include <stdio.h>

int main()
{
 int  x, linea=1,i,j;
 printf ("Deme numero ");
 canf("%d", &x);

    while (linea <= x)
    {
           
           for(j=0;j<x-linea;j++)
            {
                printf(" ");
            }

             for(i=0;i<x-j;j++)
            {
                printf("*");
                
            }
     linea++;
     printf("\n");
    }
 return 0;
}
