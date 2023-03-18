#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
      printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");
   
    
    printf("Voce iniciara o jogo com 1000 pontos, evite perder pontos acertando qual sera o numero secreto <3\n");


    int segundos=time(0);
    srand(segundos);
    int numerogrande=rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas=0;
    double pontos = 1000;

    int acertou=0;

    int nivel;
    printf("Qual o nivel de dificuldade ?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 6;
            break;
    }

    for (int i = 1; i<= numerodetentativas; i++){ 

        printf("Tentativa %d \n",tentativas+1);
        printf("Qual e o seu chute? ");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n",chute);
            if (chute < 0)
            {
            printf("Nao pode numeros negativos\n");
           
            continue; 

            }
            
    
        int acertou = (chute==numerosecreto);
        int maior = chute>numerosecreto;
        int menor = chute<numerosecreto;
        
        if (acertou){
        
            break;
        }
        else if (maior){

                printf("Seu chute foi maior do que o numero secreto\n");
            }
        else if (menor){

                printf("Seu numero foi menor do que o numero secreto\n");
        }
        
            
            tentativas++; // Abreviação para tentativas=tentativas+1

            double pontosperdidos=abs(chute-numerosecreto)/2.0;
            


        }
        printf("FIM DE JOGO!!\n");
        if (acertou){
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Voce Ganhou!\n");
        printf("Voce acertou em %d tentativas\n",tentativas);
        printf("Voce alcancou %1f pontos, parabens\n",pontos);

        }
        else{
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
        printf("Voce perdeu!Tente de novo\n");
        }
        
      
}
   
    
    