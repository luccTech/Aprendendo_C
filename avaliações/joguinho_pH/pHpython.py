import random
import pygame.mixer
import time

# Inicialize o mixer pygame
pygame.mixer.init()

def main():
    ph_alvo = random.randint(0, 14)  # Gera um pH alvo entre 0 e 14
    ph_atual = 7.0  # O pH inicial é 7 (neutro)
    tentativas = 1
    restante = 10

    print("===================================================================")
    print("              Bem vindo ao laboratório ácidos-bases!")
    print("===================================================================\n")

    jogador = input("Digite seu nome: ")

    print(f"\n- Olá, {jogador}! É muito bom ver que você tenha chegado. Como essa é a sua primeira vez aqui no laboratório, serei seu monitor e lhe ajudarei com suas atividades.")
    print("\n- É muito simples, seu trabalho aqui é atingir o valor de pH definido fazendo uso dos elementos químicos disponíveis em nosso laboratório.")
    print("\n- Para isso basta você digitar o número que corresponde ao elemento escolhido. Lembre-se de que ácidos diminuem o pH enquanto bases aumentam o pH.")

    input("\nPressione Enter para começar...")
    
    while tentativas <= 10 and ph_atual != ph_alvo:
        print(f"\nSeu objetivo é atingir um pH de {ph_alvo}.")
        print(f"pH atual da solução: {ph_atual}")
        print(f"Tentativas restantes: {restante}")
        print("Escolha uma ação:")
        print("--------------------------------   ---------------------------------------")
        print("          Ácidos:                               Bases:")
        print("--------------------------------   ---------------------------------------")
        print("| 1. +     Suco de limão       |   | 6. +     Bicarbonato de Sódio       |")
        print("--------------------------------   ---------------------------------------")
        print("| 2. +       Vinagre           |   | 7. +      Leite de magnésia         |")
        print("--------------------------------   ---------------------------------------")
        print("| 3. + Ácido Cítrico de frutas |   | 8. +        Água do mar             |")
        print("--------------------------------   ---------------------------------------")
        print("| 4. +     Vinho tinto         |   | 9. +        Clara de ovo            |")
        print("--------------------------------   ---------------------------------------")
        print("| 5. +       Iogurte           |   | 10. +    Bicarbonato de amônio      |")
        print("--------------------------------   ---------------------------------------")
        print("0. Sair do jogo")

        escolha = int(input("Escolha uma ação: "))

        if escolha == 1:
            ph_atual -= 2
        elif escolha == 2 or escolha == 3:
            ph_atual -= 3
        elif escolha == 4:
            ph_atual -= 4
        elif escolha == 5:
            ph_atual -= 5
        elif escolha == 6:
            ph_atual += 9
        elif escolha == 7:
            ph_atual += 11
        elif escolha == 8:
            ph_atual += 8
        elif escolha == 9:
            ph_atual += 7
        elif escolha == 10:
            ph_atual += 10
        elif escolha == 0:
            print("Obrigado por jogar!")
            return
        else:
            print("Escolha inválida. Tente novamente.")
            continue

        tentativas += 1
        restante -= 1

        if ph_atual == ph_alvo:
            print(f"\nParabéns! Você alcançou o pH-alvo {ph_alvo}.\n")
            print("             Parabéns, você ganhou!")
            pygame.mixer.music.load("avaliações/joguinho_pH/ganhou.mp3")
            pygame.mixer.music.play()
            print("                     ___________      ")
            time.sleep(0.5)
            print("                    '._==_==_=_.'     ")
            time.sleep(0.5)
            print("                    .-\\:      /-.    ")
            time.sleep(0.5)
            print("                   | (|:.     |) |    ")
            time.sleep(0.5)
            print("                    '-|:.     |-'     ")
            time.sleep(0.5)
            print("                      \\::.    /      ")
            time.sleep(0.5)
            print("                       '::. .'        ")
            time.sleep(0.5)
            print("                         ) (          ")
            time.sleep(0.5)
            print("                       _.' '._        ")
            time.sleep(0.5)
            print("                      '-------'       ")


            # Aguarde o término da música
            while pygame.mixer.music.get_busy():
                pygame.time.Clock().tick(10)
            break
        elif restante == 0:
            print("\nInfelizmente você não conseguiu. Tente novamente!\n")
            pygame.mixer.music.load("avaliações/joguinho_pH/perdeu.mp3")
            pygame.mixer.music.play()
            print("                    _______________         ")
            time.sleep(0.25)
            print("                   /               \       ")
            time.sleep(0.25)
            print("                  /                 \      ")
            time.sleep(0.25)
            print("                //                   \/\  ")
            time.sleep(0.25)
            print("                \|   XXXX     XXXX   | /   ")
            time.sleep(0.25)
            print("                 |   XXXX     XXXX   |/     ")
            time.sleep(0.25)
            print("                 |   XXX       XXX   |      ")
            time.sleep(0.25)
            print("                 |                   |      ")
            time.sleep(0.25)
            print("                 \__      XXX      __/     ")
            time.sleep(0.25)
            print("                   |\     XXX     /|       ")
            time.sleep(0.25)
            print("                   | |           | |        ")
            time.sleep(0.25)
            print("                   | I I I I I I I |        ")
            time.sleep(0.25)
            print("                   |  I I I I I I  |        ")
            time.sleep(0.25)
            print("                   \_             _/       ")
            time.sleep(0.25)
            print("                     \_         _/         ")
            time.sleep(0.25)
            print("                       \_______/           ")
            time.sleep(3)


            # Aguarde o término da música
            while pygame.mixer.music.get_busy():
                pygame.time.Clock().tick(10)
            break

if __name__ == "__main__":
    main()
