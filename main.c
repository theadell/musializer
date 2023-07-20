#include <stdio.h>
#include <raylib.h> 

int main(void)
{
    InitWindow(800,600,"Musializer");
    SetTargetFPS(60);
    InitAudioDevice();
    Music sound = LoadMusicStream("female-vocals.mp3");
    PlayMusicStream(sound);
    while(!WindowShouldClose()) {
        UpdateMusicStream(sound);
        if(IsKeyPressed(KEY_SPACE)) {
            if(IsMusicStreamPlaying(sound)) {
                PauseMusicStream(sound);
            }else {
                ResumeMusicStream(sound);
            }
        }
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
}