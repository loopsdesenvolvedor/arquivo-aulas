#include <stdio.h>  // Biblioteca para entrada e saida. (printf e scanf)
#include <string.h> // Biblioteca para manipular string. (strcmp)

// função para calcular as operações.
int calculator(int x, int y, char *operation)
{
    // se igual a soma.
    if (strcmp(operation, "+") == 0)
    {
        return x + y;
    }
    // se igual a subtração.
    else if (strcmp(operation, "-") == 0)
    {
        return x - y;
    }
    // se igual a multiplicação.
    else if (strcmp(operation, "*") == 0)
    {
        return x * y;
    }
    // se igual a divisão.
    else if (strcmp(operation, "/") == 0)
    {
        // verefica se o retorno e diferente de zero, ou seja não divide por zero.
        if (y != 0)
        {

            return x / y;
        }
    }
    else
    {

        // operador inválido.
        printf("Operação inválida!");
        return -1;
    }
}

int main()
{

    // declaração de variaveis.
    int x, y;
    char operation[10]; // vetor de caracteres para armazenar o operador.

    // leitura de numeros.
    printf("Digite o primeiro numero: ");
    scanf("%d", &x); // le o operador como numero.

    printf("Digite o segundo numero: ");
    scanf("%d", &y); // le o operador como numero.

    // leitura do operador
    printf("Digite um operador:(+, -, *, /)");
    scanf("%s", operation); // le o operador como string.

    // calcula e salva em result o resultado da operação.
    int result = calculator(x, y, operation);
    // imprime somente se result for deferente de -1.
    if (result != -1)
    {
        // printa o resultado em tela.
        printf("Resultado: %d\n", result);
    }

    return 0;
}
