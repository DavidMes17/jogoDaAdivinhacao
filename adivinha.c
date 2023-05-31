#include "../bibliotecas.h"

int main() {
setlocale(LC_ALL,"pt_br");
    int numeroSorteado, palpite, tentativas = 0;
    int continuar = 1;
    srand(time(NULL));

    while (continuar == 1) {
        numeroSorteado = rand() % 1001;
        tentativas = 0;

        printf("Tente adivinhar o número sorteado (entre 0 e 1000):\n");

        do {
            scanf("%d", &palpite);
            tentativas++;

            if (palpite < numeroSorteado) {
                printf("O número certo é maior que o digitado!\n");
            } else if (palpite > numeroSorteado) {
                printf("O número certo é menor que o digitado!\n");
            } else {
                printf("Show! Você conseguiu em %d tentativas!\n", tentativas);
                printf("Deseja continuar jogando? \n1-SIM \n2-NAO\n");
                scanf("%d", &continuar);

                if (continuar != 1 && continuar != 2) {
                    printf("Opção inválida! O jogo será encerrado.\n");
                    continuar = 2;
                }
            }
        } while (palpite != numeroSorteado);

    }
    printf("Obrigado por jogar!");

    return 0;
}