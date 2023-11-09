#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s avaliações/joguinho_pH/ganhou.mp3\n", argv[0]);
        return -1;
    }

    // Abre o arquivo MP3
    if (mciSendStringA("open \"" argv[1] "\" type mpegvideo alias mp3", NULL, 0, NULL) != 0) {
        printf("Erro ao abrir o arquivo MP3\n");
        return -1;
    }

    // Reproduz o arquivo MP3
    if (mciSendStringA("play mp3", NULL, 0, NULL) != 0) {
        printf("Erro ao reproduzir o arquivo MP3\n");
        mciSendStringA("close mp3", NULL, 0, NULL); // Fecha o arquivo MP3
        return -1;
    }

    printf("Pressione Enter para sair...\n");
    getchar();

    // Fecha o arquivo MP3
    mciSendStringA("close mp3", NULL, 0, NULL);

    return 0;
}
