#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#define PlaySound PlaySoundA

int main(int argc, char *argv){
    PlaySound("ganhou.wav", NULL, SND_SYNC | SND_FILENAME );
    Sleep(2000);
    system("pause");
    PlaySound(NULL,0,0);
    system("pause");


}