#include <stdio.h>
int nmov=0;
int hanoi(int n, char origen, char  aux, char  dest)
{    
    
    /* si no hay discos retorna 0*/
    if (n == 0) return 0;
    else {
      
        hanoi(n - 1, origen, dest, aux);
        // imprime movimiento
        printf( "Mover disco  %i  desde  %c   a  %c \n",n,origen,dest);   
        nmov=nmov+1;  
        hanoi(n - 1, aux, origen, dest);
    }
}

int main()
{
    int x;
    printf("Numero de discos\n");
    scanf("%d" ,&x);
    hanoi(x, 'O', 'A', 'D');
    printf("Movimientos %d\n",nmov);
    
    return 0;
} 
