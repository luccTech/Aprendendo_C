#include <SDL2/SDL.h>

int main(){
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
    printf("Erro ao inicializar o SDL: %s\n", SDL_GetError());
    return 1;
    }

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
    printf("Erro ao inicializar o sistema de áudio: %s\n", Mix_GetError());
    return 1;
    }
    Mix_Music *musica = Mix_LoadMUS("avaliações/joguinho_pH/perdeu.mp3");

    if (!musica) {
        printf("Erro ao carregar a música: %s\n", Mix_GetError());
        return 1;
    }

    Mix_PlayMusic(musica, 1);
    Mix_FreeMusic(musica);
    Mix_CloseAudio();
    SDL_Quit();

}