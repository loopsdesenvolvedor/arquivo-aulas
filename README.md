# Comando de compilação
- gcc -g calculator.c -o calculator.exe => compilando.
- ./calculator.exe => exemplo de como executar o arquivo.




## Calendario simples

Exemplo:

```c
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

```

## Calculadora simples

```c
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
```


## Verificador de cpf simples

```
#include <stdio.h>     // para usar printf e scanf
#include <string.h>    // para usa a função: strlen
#include <ctype.h>     // para usar a função: isdigit

int main() {

    // cpf e um array de string
    char cpf[12];  // 12 para poder usar 11 digitos e mais \0

    // pede que o usuario digite o CPF
    printf("Digite seu CPF (somente os 11 numeros): ");
    scanf("%11s", cpf);  // %11s evita que a memoria seja estourada

    // verefica se possui 11 digitos
    // != (diferente)
    if (strlen(cpf) != 11) {
        printf("CPF invalido. Voce deve digitar exatamente 11 numeros.\n");
        return 1;  // Retorna 1 para indicar que ocorreu um erro
    }

    // verifica se os digitos sao numeros
    // for => vai de zero a 11 passando por todos os digitos, verefica um-a-um
    // se e diferente de numero
    for (int i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {  
            printf("CPF invalido. Digite apenas numeros.\n");
            return 1; //erro
        }
    }

    // CPF e valido
    printf("CPF digitado corretamente: %s\n", cpf);

    return 0; // sucesso
}
```

