#include <stdio.h>
#include <stdlib.h>

int arreglo [4];
void uno(int x);
void dos(int x);
void tres(int x);
void cuatro(int x);
int main()
{
	FILE *archivo;
	char caracter;
        
	archivo = fopen("archivo.txt","r");
        
	if (archivo == NULL){
 
		printf("\nError de apertura del archivo. \n\n");
        }else{
 
 
	    printf("\nEl contenido del archivo de prueba es \n\n");
           int i=0;
	    while (feof(archivo) == 0)
	    {
		caracter = fgetc(archivo);
		printf("%c",caracter);
                printf("\n");
               
                int n=caracter-48;
                arreglo[i]=n;
                uno(arreglo[i]);
                dos(arreglo[i]);
                tres(arreglo[i]);
                cuatro(arreglo[i]);
                i+1;
	    }
         
        }
        
        fclose(archivo);
       
	return 0;
}


void uno(int x)
{
  int i,j;
  for (i=0;i<=x;i++)
   {
     for (j=0;j<i;j++)
       {
         printf("*");
       }
         printf("\n");
   }
}


void dos(int x)
{
  int i,j;
  for (i=x;i>=0;i--)
    {
      for (j=0;j<i;j++)
       {
         printf("*");
       }
     printf("\n");
    }
}

void tres(int x)
{
int  linea=1,i,j;
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
}

void cuatro(int x)
{
    int   linea=1,i,j;
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
}
