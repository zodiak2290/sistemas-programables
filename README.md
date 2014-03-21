sistemas-programables
=====================

#include <stdio.h>
int main ()
{
int x;
int i,j;
printf("Dame numero\n");
scanf("%d" ,&x);
for (i=0;i<=x;i++)
{
for (j=0;j<i;j++)
{
 printf("*");
}
printf("\n");
}
return 0;
}



#include <stdio.h>
int main ()
{
int x;
int i,j;
printf("Dame numero\n");
scanf("%d" ,&x);
for (i=x;i>=0;i--)
{
for (j=0;j<i;j++)
{
 printf("*");
}
printf("\n");
}
return 0;
}

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





#include <stdio.h>

int main()
{
   int  x, linea=1,i,j;
    printf ("Deme numero ");
    scanf("%d", &x);

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

