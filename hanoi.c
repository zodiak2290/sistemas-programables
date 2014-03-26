#include <stdio.h>

int hanoi(int n, char origen, char  aux, char  dest)
{
    /* si no hay discos retorna 0*/
    if (n == 0) return 0;
    else {
      
        hanoi(n - 1, origen, dest, aux);
        // imprime movimiento
        printf( "Mover disco  %i  desde  %c   a  %c \n",n,origen,dest);     
        hanoi(n - 1, aux, origen, dest);
    }
}

int main()
{
    int x;
    printf("Numero de discos\n");
    scanf("%d" ,&x);
    hanoi(x, 'O', 'A', 'D');

    
    return 0;
} 
