import pygame.mixer

# Inicialize o mixer pygame
pygame.mixer.init()

# Carregue o arquivo MP3
pygame.mixer.music.load("avaliações/joguinho_pH/ganhou.mp3")

# Reproduza o arquivo MP3
pygame.mixer.music.play()

# Aguarde o término da música
while pygame.mixer.music.get_busy():
    pygame.time.Clock().tick(10)
