# Calendario simples 
Exemplo:
#include <stdio.h>

int main()
{
    int dia = 2;
    switch (dia)
    {
    case 0:
        printf("Hoje é domingo\n");
        break;
    case 1:
        printf("Hoje é segunda-feira\n");
        break;
    case 2:
        printf("Hoje é terça-feira\n");
        break;
    case 3:
        printf("Hoje é quarta-feira\n");
        break;
    case 4:
        printf("Hoje é quinta-feira\n");
        break;
    case 5:
        printf("Hoje é sexta-feira\n");
        break;
    case 6:
        printf("Hoje é sábadoa\n");
        break;

    default:
        printf("Dia inválido\n");
        break;
    }
}
 
