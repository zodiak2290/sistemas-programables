#include <stdio.h>

int main()
{
int  x, linea=1,i,j;
printf ("Deme numero ");
scanf("%d", &x);

    while (linea <= x)
    {
           
           for(j=0;j<linea-1;j++)
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
