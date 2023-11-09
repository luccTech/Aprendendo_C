#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void tab(){
    printf("\t\t\t\t\t");
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    srand(time(NULL));  // Inicializa a semente para números aleatórios

    float ph_alvo = (float)(rand() % 14);  // Gera um pH alvo entre 0 e 14
    float ph_atual = 7.0;  // O pH inicial é 7 (neutro)
    int escolha;
    char jogador [200];
    int restante = 10;
    int tentativas = 1;

    printf("     ====================================================================\n");
    printf("                  Bem vindo ao laboratório ácidos-bases!\n");
    printf("     ====================================================================\n\n");
    printf("Digite seu nome:");
    scanf("%s", jogador);
    
    system("cls");


    printf("=====================================================================================================================================================================\n");

    printf("-Olá Sr./sra. %s! É muito bom ver que você tenha chegado. Como essa é a sua primeira vez aqui no laboratório serei seu monitor e lhe ajudarei com suas atividades.\n\n", jogador);

    printf("\n-É muito simples, seu trabalho aqui é atingir o valor de pH definido fazendo uso dos elementos químicos disponíveis em nosso laboratório\n\n");

    printf("\n-Para isso basta você digitar o numero que corresponde ao elemento escolhido, lembre-se que dos diminuem o ph enquanto acidos aumentam o pH\n\n");
    printf("=====================================================================================================================================================================\n");
    system("pause");
    system("cls");
    

    while (tentativas <= 10 && ph_atual != ph_alvo) {

        //printf("")
        printf("Seu objetivo é atingir um pH de %g.\n", ph_alvo);
        printf("pH atual da solução: %g\n", ph_atual);
        printf("Tentativas restantes: %d\n", restante);
        printf("Escolha uma ação:\n");

        printf("--------------------------------   ---------------------------------------\n");
        printf("          Ácidos:                               Bases:\n");
        printf("--------------------------------   ---------------------------------------\n");
        printf("| 1. +     Suco de limão       |   | 6. +     Bicarbonato de Sódio       |\n");
        printf("--------------------------------   ---------------------------------------\n");
        printf("| 2. +       Vinagre           |   | 7. +      Leite de magnésia         |\n");
        printf("--------------------------------   ---------------------------------------\n");
        printf("| 3. + Ácido Cítrico de frutas |   | 8. +        Água do mar             |\n");
        printf("--------------------------------   ---------------------------------------\n");
        printf("| 4. +     Vinho tinto         |   | 9. +        Clara de ovo            |\n");
        printf("--------------------------------   ---------------------------------------\n");
        printf("| 5. +       Iogurte           |   | 10. +    Bicarbonato de amônio      |\n");
        printf("--------------------------------   ---------------------------------------\n");
        printf("0. Sair do jogo\n");
        printf("Escolha uma ação:\n");
        

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                    ph_atual -= 2; // Adicionar HCl diminui o pH
                    break;
                case 2:
                    ph_atual -= 3; // Adicionar CH3COOH aumenta o pH
                    break;
                case 3:
                    ph_atual -= 3; // Adicionar NaOH aumenta o pH
                    break;
                case 4:
                    ph_atual -= 4; // Adicionar KOH aumenta o pH
                    break;
                case 5:
                    ph_atual -= 5; // Adicionar KOH aumenta o pH
                    break;
                case 6:
                    ph_atual += 9; // Adicionar KOH aumenta o pH
                    break;
                case 7:
                    ph_atual += 11; // Adicionar KOH aumenta o pH
                    break;
                case 8:
                    ph_atual += 8; // Adicionar KOH aumenta o pH
                    break;
                case 9:
                    ph_atual += 7; // Adicionar KOH aumenta o pH
                    break;
                case 10:
                    ph_atual += 10; // Adicionar KOH aumenta o pH
                    break;
                case 0:
                printf("Obrigado por jogar!\n");
                return 0;
            default:
                printf("Escolha inválida. Tente novamente.\n");
        }

        tentativas++;
        restante--;
        system("pause");
        system("cls");

        if (ph_atual == ph_alvo) {
            printf("\nParabéns! Você alcançou o pH-alvo %.g.\n\n\n", ph_alvo);
            system("pause");
            system("cls");
            
        }
    }

    if (restante == 0 && ph_atual != ph_alvo) {

        printf("\nInfelizmente você não conseguiu. Tente novamente!\n");
        system("pause");
    }
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}