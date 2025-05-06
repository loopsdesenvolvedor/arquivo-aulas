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
