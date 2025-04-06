#include <stdio.h>

void moverTorre(int casas, int acao) {
    if (casas <= 0) return;
    printf(acao == 1 ? "Direita\n" : "Esquerda\n");
    moverTorre(casas - 1, acao);
}

void moverBispo(int casas, int acao) {
    if (casas <= 0) return;

    for (int i = 0; i < 1; i++) {  
        for (int j = 0; j < 1; j++) {  
            if (acao == 1)
                printf("Cima, Direita\n");
            else
                printf("Baixo, Esquerda\n");
        }
    }

    moverBispo(casas - 1, acao);
}

void moverRainha(int casas, int acao) {
    if (casas <= 0) return;
    printf(acao == 1 ? "Esquerda\n" : "Direita\n");
    moverRainha(casas - 1, acao);
}

void moverCavalo(int acao) {
    int cima = 2;      
    int direita = 1;    

    for (int i = 1; i <= cima + 1; i++) {
        for (int j = 1; j <= direita + 1; j++) {
            if (i > cima && j > direita) {
                break;  
            }

            if (acao == 1) {
                if (i <= cima) {
                    printf("Cima\n");
                    if (i == cima && j == 1) continue; 
                }
                if (j <= direita && i > cima - 1) {
                    printf("Direita\n");
                }
            } else {
                if (i <= cima) {
                    printf("Baixo\n");
                    if (i == cima && j == 1) continue; 
                }
                if (j <= direita && i > cima - 1) {
                    printf("Esquerda\n");
                }
            }
        }
    }
}

int main() {
    int escolhaPeca, escolhaAcao;

    printf("Escolha uma peça:\n");
    printf("[1] Torre\n[2] Bispo\n[3] Cavalo\n[4] Dama\n");
    scanf("%d", &escolhaPeca);

    printf("Escolha uma ação:\n");
    printf("[1] Atacar\n[2] Recuar\n");
    scanf("%d", &escolhaAcao);

    switch (escolhaPeca) {
        case 1:
            moverTorre(5, escolhaAcao);
            break;
        case 2:
            moverBispo(5, escolhaAcao);
            break;
        case 3:
            moverCavalo(escolhaAcao);
            break;
        case 4:
            moverRainha(8, escolhaAcao);
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    // Mensagem final
    if (escolhaAcao == 1) {
        printf("Você avançou.\n");
    } else if (escolhaAcao == 2) {
        printf("Você recuou.\n");
    } else {
        printf("Ação inválida.\n");
    }

    return 0;
}
