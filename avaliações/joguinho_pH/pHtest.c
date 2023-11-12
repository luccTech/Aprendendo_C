#include <stdio.h>
#include <stdlib.h>
#include <sndfile.h>

int main() {
    const char *nome_arquivo = "caminho/do/arquivo.mp3";

    SNDFILE *sndfile;
    SF_INFO sfinfo;

    sndfile = sf_open(nome_arquivo, SFM_READ, &sfinfo);

    if (!sndfile) {
        fprintf(stderr, "Erro ao abrir o arquivo: %s\n", sf_strerror(NULL));
        return 1;
    }

    printf("Taxa de Amostragem: %d\n", sfinfo.samplerate);
    printf("Número de Canais: %d\n", sfinfo.channels);
    printf("Número de Quadros: %lld\n", sfinfo.frames);

    sf_close(sndfile);

    return 0;
}
