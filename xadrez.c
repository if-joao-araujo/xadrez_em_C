
#include <stdio.h>

int main() {
    
    int i = 0; 
    int movimento_peça;
    
    char escolha_torre;
    char ataque_torre[6] = "cima"; 
    char recuo_torre[6] = "baixo"; 
    
    printf("Deseja movimentar qual peça:\n [1] Torre\n [2] Bispo\n [3] Torre\n [4] Cavalo\n:");
    scanf("%d", &movimento_peça);
    
    if (movimento_peça == 1) {
        printf("Você escolheu torre\n");
        printf("Deseja atacar [a] ou recuar [r]: ");
        scanf(" %c", &escolha_torre);  

        if (escolha_torre == 'a') { 
            printf("Movimento de ataque: ");
            for(i;5;i++ ){
                printf("%c", ataque_torre); 
                i++;
            }else if (escolha_torre == 'r'){
               for(i;5; i++){
                  printf("%c", recuo_torre);
                }
            }
        }
        
    }
    return 0;
}
