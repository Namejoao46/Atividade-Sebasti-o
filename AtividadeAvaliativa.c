#include <stdio.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL,"PORTUGUESE");
    int inicio1, fim1, inicio2, fim2, soma;

    // Receber valores iniciais e finais dos somatórios
    printf("Digite o valor inicial do somatório externo: ");
    scanf("%d", &inicio1);
    printf("Digite o valor final do somatório externo: ");
    scanf("%d", &fim1);
    printf("Digite o valor inicial do somatório interno: ");
    scanf("%d", &inicio2);
    printf("Digite o valor final do somatório interno: ");
    scanf("%d", &fim2);

    // Calcular os somatórios aninhados
    for (int i = inicio1; i <= fim1; i++) {
        for (int j = inicio2; j <= fim2; j++) {
            soma = (i * j) + j;

        }
    }

    // Mostrar o resultado
    printf("O resultado do somatório é: %d\n", soma);

    return 0;
}
