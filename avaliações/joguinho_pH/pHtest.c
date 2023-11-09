#include <windows.h>
#include <mmsystem.h>

// Função para reproduzir uma nota musical
void playSound(float frequency, float duration) {
    Beep(frequency, duration);
}

/*
    | Nota | Frequência (Hz) |
    |------|-----------------|
    |  C6  | 1046,50         |
    |  D6  | 1174,66         |
    |  E6  | 1318,51         |
    |  F6  | 1396,91         |
    |  G6  | 1567,98         |
    |  A6  | 1760,00         |
    |  B6  | 1975,53         |
    |  C7  | 2093,00         |
    |  D7  | 2349,32         |
    |  E7  | 2637,02         |
    |  F7  | 2793,83         |
    |  G7  | 3135,96         |
    |  A7  | 3520,00         |
    |  B7  | 3951,07         |
    |  C8  | 4186,01         |
*/
int main() {
    // Notas musicais e suas frequências
    int notes[] = { 1046.50, 1174.66, 1318.51, 1396.91, 1567.98, 1760.00, 1975.53 };

    // Duração de cada nota em milissegundos
    int duration = 500;

    float C6  = 1046.50;
    float D6  = 1174.66;
    float E6  = 1318.51;
    float F6  = 1396.91;
    float G6  = 1567.98;
    float A6  = 1760.00;
    float B6  = 1975.53;
    float C7  = 2093.00;
    float D7  = 2349.32;
    float E7  = 2637.02;
    float F7  = 2793.83;
    float G7  = 3135.96;
    float A7  = 3520.00;
    float B7  = 3951.07;
    float C8  = 4186.01;

    playSound(C6, 200);
    Sleep(200);
    playSound(C6, 200);
    Sleep(200);
    playSound(C6, 200);
    Sleep(200);
    playSound(C6, 200);
    Sleep(200);
    return 0;
}