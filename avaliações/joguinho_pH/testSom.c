#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>

#pragma comment(lib, "winmm.lib")

int main() {
    // Substitua "caminho/do/arquivo.mp3" pelo caminho do seu arquivo MP3
    const char *mp3FilePath = "avaliações/joguinho_pH/ganhou.mp3";

    // Construir o comando MCI para abrir e reproduzir o arquivo MP3
    char command[256];
    snprintf(command, sizeof(command), "open \"%s\" type mpegvideo alias mp3", mp3FilePath);
    mciSendStringA(command, NULL, 0, NULL);

    // Reproduzir o arquivo MP3
    mciSendStringA("play mp3", NULL, 0, NULL);

    // Aguardar até que a reprodução seja concluída (opcional)
    Sleep(5000);  // Aguarda por 5 segundos (você pode ajustar conforme necessário)

    // Fechar o arquivo MP3
    mciSendStringA("close mp3", NULL, 0, NULL);

    return 0;
}
