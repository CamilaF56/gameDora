#include "raylib.h"
//#include "menuHeader.h"
#include <iostream>

const int screenWidth = GetScreenWidth();
const int screenHeight = GetScreenHeight();

int aux = 0;

// using namespace menuHeader;

void menuinit();
void start();
void iniciar();
void obj();
void cred();
void histone();
void alterOne();
void histTwo();
void histThree();
void histFour();
void histFive();
void histSix();
void histSeven();
void histEight();
void histNine();
void histTen();
void telaFinal();

int main(void)
{
    // Menu principal

    start();
    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        // Desenho
        //----------------------------------------------------------------------------------
            menuinit();
        //----------------------------------------------------------------------------------
    }
    menuinit();
}


void start(){
    InitWindow(screenWidth, screenHeight, "Dora, a conselheira");
    InitAudioDevice();
    SetTargetFPS(60);
}

void menuinit(){
    ClearBackground(RAYWHITE);

        Texture2D dora = LoadTexture("assets/dora.png");
        Texture2D fundo = LoadTexture("assets/background.png");
        Vector2 mp = GetMousePosition();
        Sound click = LoadSound("assets/click.wav");

        BeginDrawing();

            DrawTexture(fundo, screenWidth , screenHeight , RAYWHITE);

            DrawTexture(dora, 150,230, WHITE);
            DrawText("Dora, a conselheira ", 150, 120, 80, WHITE);

            DrawText("Iniciar", 925, 360, 35, WHITE);
            DrawRectangleLines(850,350,250,50,WHITE);
                if(CheckCollisionPointRec(mp,{850,350,250,50})){
                        if(IsMouseButtonPressed(0)){
                            PlaySound(click);
                            iniciar();
                        }
                }

            DrawText("Objetivos", 895, 420, 35, WHITE);
            DrawRectangleLines(850,410,250,50,WHITE);
            if(CheckCollisionPointRec(mp,{850,410,250,50})){
                        if(IsMouseButtonPressed(0)){
                            PlaySound(click);
                            obj();
                        }
                }

            DrawText("Creditos", 900, 480, 35, WHITE);
            DrawRectangleLines(850,470,250,50,WHITE);
            if(CheckCollisionPointRec(mp,{850,470,250,50})){
                        if(IsMouseButtonPressed(0)){
                            PlaySound(click);
                            cred();
                        }
                }

        EndDrawing();

}

void iniciar(){

    ClearBackground(BLACK);


    Texture2D fundo2 = LoadTexture("assets/street.png");
    Texture2D sema = LoadTexture("assets/semaforo.png");


    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();

        DrawTexture(fundo2, screenWidth, screenHeight, RAYWHITE);
        DrawTexture(sema, 720, 370, RAYWHITE);

        DrawText("Aperte SPACE para comecar",80,60,50, BLACK);

        if(IsKeyPressed(KEY_SPACE)){
            histone();
        }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
}

void obj(){
    InitWindow(screenWidth, screenHeight, "Dora, a conselheira");
    ClearBackground(BLACK);

    Texture2D fundo3 = LoadTexture("assets/computer.png");

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();

        DrawTexture(fundo3, screenWidth, screenHeight, RAYWHITE);
//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        CloseWindow();

}

void cred(){
    InitWindow(screenWidth, screenHeight, "Dora, a conselheira");
    ClearBackground(BLACK);

    Texture2D fundo4 = LoadTexture("assets/alcides.png");

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();

        DrawTexture(fundo4, screenWidth, screenHeight, RAYWHITE);
//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();
}

void histone(){
    ClearBackground(RAYWHITE);

    Texture2D fundo2 = LoadTexture("assets/street.png");
    Texture2D sema = LoadTexture("assets/semaforo.png");
    Texture2D doraone = LoadTexture("assets/dorahistone.png");
    Texture2D goku = LoadTexture("assets/goku.png");

    Font fo = LoadFont("assets/alagard.png");

    const char nar1[75] = "Era uma vez, em uma realidade alternativa, Dora, a conselheira decidiu";
    const char nar2[79] = "ajudar as criancas de sua cidade, pois cada dia o mundo esta mais perigoso.";
    const char nar3[56] = "Entao chegou a sua vez, ajude a Dora e seus amiguinhos.";
    const char nar4[30] = "Aperte SPACE para continuar";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fundo2, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar1, 0, framesCounter/5), 40, 40, 34, BLACK);
        DrawText(TextSubtext(nar2, 0, framesCounter/5), 40, 75, 34, BLACK);
        DrawText(TextSubtext(nar3, 0, framesCounter/5), 40, 110, 34, BLACK);
        DrawTextCodepoint(fo,aux,{110,34},50,BLACK);

        DrawTexture(doraone, 340, 560, RAYWHITE);
        DrawTexture(goku, 450, 550, RAYWHITE);
        DrawTexture(sema, 720, 370, RAYWHITE);


        DrawText(TextSubtext(nar4, 0, framesCounter/5), 990, 720, 20, WHITE);


        if(IsKeyPressed(KEY_SPACE) && aux != 1){
            alterOne();
        }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void alterOne(){
    ClearBackground(RAYWHITE);

    Texture2D fundo2 = LoadTexture("assets/street.png");
    Texture2D sema = LoadTexture("assets/semaforo.png");
    Texture2D doraone = LoadTexture("assets/dorahistone.png");
    Texture2D goku = LoadTexture("assets/goku.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");

    const char nar11[45] = "Dora esta passeando com seu amiguinho e esta";
    const char nar12[63] = "precisando atravessar a rua. Quando ela deve atravessar a rua?";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();

        framesCounter++;

        DrawTexture(fundo2, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar11, 0, framesCounter/5), 40, 40, 34, BLACK);
        DrawText(TextSubtext(nar12, 0, framesCounter/5), 40, 70, 34, BLACK);

        DrawTexture(doraone, 340, 560, RAYWHITE);
        DrawTexture(goku, 450, 550, RAYWHITE);
        DrawTexture(sema, 720, 370, RAYWHITE);
        DrawTexture(pergaminho, 850, 200, RAYWHITE);

        DrawText("Sinal Vermelho", 1000, 370, 30, BLACK);
        DrawRectangleLines(990,350,250,70,BLACK);

        DrawText("Sinal Amarelo", 1020, 470, 30, BLACK);
        DrawRectangleLines(990,450,250,70,BLACK);

        DrawText("Sinal Verde", 1030, 570, 30, BLACK);
        DrawRectangleLines(990,550,250,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{990,550,250,70})){
                        if(IsMouseButtonPressed(0)){
                            histTwo();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void histTwo(){
    ClearBackground(RAYWHITE);

    Texture2D dora2 = LoadTexture("assets/dora2.png");
    Texture2D fHist2 = LoadTexture("assets/trash.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");
    Texture2D candy = LoadTexture("assets/candy.png");

    const char nar21[40] = "Dora acabou de comer uma bala e precisa";
    const char nar22[47] = "jogar a embalagem fora, o que dora deve fazer?";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fHist2, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar21, 0, framesCounter/5), 550, 45, 30, BLACK);
        DrawText(TextSubtext(nar22, 0, framesCounter/5), 550, 85, 30, BLACK);

        DrawTexture(pergaminho, 660, 210, RAYWHITE);
        DrawTexture(dora2, 350, 400, RAYWHITE);
        DrawTexture(candy, 520, 445, RAYWHITE);

        DrawText("joga no chao mesmo, pois nao", 800, 370, 15, BLACK);
        DrawText("esta vendo nenhum lixo por perto", 800, 390, 15, BLACK);
        DrawRectangleLines(790,350,250,70,BLACK);

        DrawText("deve esconder em algum lugar", 800, 470, 15, BLACK);
        DrawText("para que niguem veja ", 800, 490, 15, BLACK);
        DrawRectangleLines(790,450,250,70,BLACK);

        DrawText("dora deve guardar o papel no", 800, 570, 15, BLACK);
        DrawText("bolso ate encontrar um lixeira", 800, 590, 15, BLACK);
        DrawRectangleLines(790,550,250,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{790,550,250,70})){
                        if(IsMouseButtonPressed(0)){
                            histThree();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void histThree(){
    ClearBackground(RAYWHITE);

    Texture2D dora2 = LoadTexture("assets/dora2.png");
    Texture2D fHist3 = LoadTexture("assets/fThree.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");
    Texture2D link = LoadTexture("assets/link.png");

    const char nar31[55] = "Dora esta com seu amiguinho perto do carro do pai dele";
    const char nar32[50] = "Link: Dora vamos tentar ligar o carro?? hihi";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fHist3, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar31, 0, framesCounter/5), 40, 40, 34, BLACK);
        DrawText(TextSubtext(nar32, 0, framesCounter/5), 40, 100, 34, BLACK);

        DrawTexture(pergaminho, 660, 210, RAYWHITE);
        DrawTexture(dora2, 200, 430, RAYWHITE);
        DrawTexture(link, 400, 430, RAYWHITE);

        DrawText("Dora deve ajudar o seu", 800, 370, 15, BLACK);
        DrawText("amiguinho nessa aventura?", 800, 390, 15, BLACK);
        DrawRectangleLines(790,350,250,70,BLACK);

        DrawText("Dora deve dizer o quanto é", 800, 470, 15, BLACK);
        DrawText("perigoso tentar fazer isso?", 800, 490, 15, BLACK);
        DrawRectangleLines(790,450,250,70,BLACK);

        DrawText("Dora deve sair correndo e", 800, 560, 15, BLACK);
        DrawText("deixar com que seu amiguinho", 800, 580, 15, BLACK);
        DrawText("ligue o carro?", 800, 600, 15, BLACK);
        DrawRectangleLines(790,550,250,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{790,450,250,70})){
            if(IsMouseButtonPressed(0)){
                histFour();
                }
            }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void histFour(){
    ClearBackground(BLACK);

    Texture2D dora2 = LoadTexture("assets/dora2.png");
    Texture2D fHist4 = LoadTexture("assets/fFour.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");
    Texture2D raposo = LoadTexture("assets/raposo.png");
    Texture2D candy = LoadTexture("assets/candy.png");

    const char nar41[49] = "Dora esta em um parque, e o raposo oferece";
    const char nar42[36] = "um doce a ela, ela deveria aceitar?";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fHist4, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar41, 0, framesCounter/5), 350, 40, 35, BLACK);
        DrawText(TextSubtext(nar42, 0, framesCounter/5), 350, 100, 35, BLACK);

        DrawTexture(pergaminho, 780, 200, RAYWHITE);
        DrawTexture(dora2, 580, 530, RAYWHITE);
        DrawTexture(raposo, 100, 500, RAYWHITE);
        DrawTexture(candy, 160, 630, RAYWHITE);

        DrawText("nao, ela nao sabe de onde", 900, 370, 15, BLACK);
        DrawText("veio esse doce", 900, 390, 15, BLACK);
        DrawRectangleLines(890,350,280,70,BLACK);

        DrawText("sim, pois parece apetitoso", 900, 470, 15, BLACK);
        DrawRectangleLines(890,450,280,70,BLACK);

        DrawText("sim, pois o raposo parece ser legal", 900, 560, 15, BLACK);
        DrawRectangleLines(890,550,280,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{890,350,280,70})){
                        if(IsMouseButtonPressed(0)){
                            histFive();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();
}

void histFive(){
    ClearBackground(BLACK);

    Texture2D dora3 = LoadTexture("assets/dora3.png");
    Texture2D fHist5 = LoadTexture("assets/fundo5.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");
    Texture2D zeze = LoadTexture("assets/zezinho.png");


    const char nar51[43] = "A Dora esta vendo uma crianca com os dedos";
    const char nar52[48] = "em direcao a uma tomada, o que Dora deve fazer?";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fHist5, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar51, 0, framesCounter/5), 400, 40, 35, BLACK);
        DrawText(TextSubtext(nar52, 0, framesCounter/5), 400, 100, 35, BLACK);

        DrawTexture(pergaminho, 10, 200, RAYWHITE);
        DrawTexture(zeze, 1120, 520, RAYWHITE);
        DrawTexture(dora3, 750, 520, RAYWHITE);

        DrawText("comunicar uma a um adulto", 130, 370, 20, BLACK);
        DrawText("de confianca", 130, 390, 20, BLACK);
        DrawRectangleLines(120,350,280,70,BLACK);

        DrawText("ignorar, ja que nao comigo", 130, 470, 20, BLACK);
        DrawRectangleLines(120,450,280,70,BLACK);

        DrawText("rezar um pai nosso", 130, 570, 20, BLACK);
        DrawRectangleLines(120,550,280,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{120,350,280,70})){
                        if(IsMouseButtonPressed(0)){
                            histSix();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void histSix(){
    ClearBackground(BLACK);

    Texture2D dora3 = LoadTexture("assets/dora3.png");
    Texture2D fHist6 = LoadTexture("assets/fundo6.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");


    const char nar61[60] = "Dora esta perto de um aquario e quer saber qual o nome dado";
    const char nar62[51] = "a um conjunto de peixes, ajude a Dora a descobrir.";
    const char nar63[42] = "Qual e nome dado a um conjunto de peixes?";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fHist6, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar61, 0, framesCounter/5), 420, 40, 30, BLACK);
        DrawText(TextSubtext(nar62, 0, framesCounter/5), 420, 80, 30, BLACK);
        DrawText(TextSubtext(nar63, 0, framesCounter/5), 420, 120, 30, BLACK);

        DrawTexture(pergaminho, 10, 200, RAYWHITE);
        DrawTexture(dora3, 750, 520, RAYWHITE);

        DrawText("peixonautas", 130, 370, 20, BLACK);
        DrawRectangleLines(120,350,280,70,BLACK);

        DrawText("peixaria", 130, 470, 20, BLACK);
        DrawRectangleLines(120,450,280,70,BLACK);

        DrawText("cardume", 130, 570, 20, BLACK);
        DrawRectangleLines(120,550,280,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{120,550,280,70})){
                        if(IsMouseButtonPressed(0)){
                            histSeven();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void histSeven(){
    ClearBackground(BLACK);

    Texture2D dora3 = LoadTexture("assets/dora3.png");
    Texture2D fHist7 = LoadTexture("assets/fundo7.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");
    Texture2D dollar = LoadTexture("assets/dollars.png");


    const char nar71[38] = "Dora encontrou uma carteira no chao.";
    const char nar72[22] = "O que ela deve fazer?";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fHist7, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar71, 0, framesCounter/5), 350, 40, 35, BLACK);
        DrawText(TextSubtext(nar72, 0, framesCounter/5), 350, 80, 35, BLACK);

        DrawTexture(pergaminho, 10, 200, RAYWHITE);
        DrawTexture(dora3, 750, 430, RAYWHITE);
        DrawTexture(dollar, 1100, 620, RAYWHITE);

        DrawText("pegar, ja que achado", 130, 370, 20, BLACK);
        DrawText("nao e roubado...", 130, 390, 20, BLACK);
        DrawRectangleLines(120,350,280,70,BLACK);

        DrawText("deixar la mesmo pois o", 130, 470, 20, BLACK);
        DrawText("dono ira voltar para pegar", 130, 490, 20, BLACK);
        DrawRectangleLines(120,450,280,70,BLACK);

        DrawText("pegar, pois mais", 130, 570, 20, BLACK);
        DrawText("dinheiro e sucesso", 130, 590, 20, BLACK);
        DrawRectangleLines(120,550,280,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{120,450,280,70})){
                        if(IsMouseButtonPressed(0)){
                            histEight();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void histEight(){
    ClearBackground(BLACK);

    Texture2D dora3 = LoadTexture("assets/dora3.png");
    Texture2D fHist8 = LoadTexture("assets/fundo8.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");
    Texture2D dustin = LoadTexture("assets/dustin.png");

    const char nar81[36] = "Dora esta com seu amiguinho, Dustin";
    const char nar82[42] = "e estao com fome, o que eles devem fazer?";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fHist8, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar81, 0, framesCounter/5), 250, 40, 35, BLACK);
        DrawText(TextSubtext(nar82, 0, framesCounter/5), 250, 80, 35, BLACK);

        DrawTexture(pergaminho, 10, 200, RAYWHITE);
        DrawTexture(dora3, 750, 430, RAYWHITE);
        DrawTexture(dustin, 1120, 480, RAYWHITE);

        DrawText("ligar o fogao", 130, 370, 20, BLACK);
        DrawRectangleLines(120,350,280,70,BLACK);

        DrawText("comer todo o", 130, 470, 20, BLACK);
        DrawText("chocolate do armario", 130, 490, 20, BLACK);
        DrawRectangleLines(120,450,280,70,BLACK);

        DrawText("dizer para um adulto", 130, 570, 20, BLACK);
        DrawRectangleLines(120,550,280,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{120,550,280,70})){
                        if(IsMouseButtonPressed(0)){
                            histNine();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();
}

void histNine(){
    ClearBackground(BLACK);

    Texture2D dora2 = LoadTexture("assets/dora2.png");
    Texture2D fHist9 = LoadTexture("assets/fundo9.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");
    Texture2D thief = LoadTexture("assets/thief.png");
    Texture2D shrek = LoadTexture("assets/shrek.png");

    const char nar91[50] = "Dora esta passeando e viu alguem suspeito. Nossa";
    const char nar92[60] = "aquilo parece um assalto para a Dora. O que ela deve fazer?";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fHist9, screenWidth, screenHeight, RAYWHITE);

        DrawText(TextSubtext(nar91, 0, framesCounter/5), 250, 40, 35, BLACK);
        DrawText(TextSubtext(nar92, 0, framesCounter/5), 250, 80, 35, BLACK);

        DrawTexture(pergaminho, 10, 200, RAYWHITE);
        DrawTexture(dora2, 550, 500, RAYWHITE);
        DrawTexture(thief, 950, 420, RAYWHITE);
        DrawTexture(shrek, 1100, 420, RAYWHITE);

        DrawText("Chamar um adulto", 130, 370, 20, BLACK);
        DrawRectangleLines(120,350,280,70,BLACK);

        DrawText("dar um cascudo", 130, 470, 20, BLACK);
        DrawText("no suspeito", 130, 490, 20, BLACK);
        DrawRectangleLines(120,450,280,70,BLACK);

        DrawText("sair correndo", 130, 570, 20, BLACK);
        DrawRectangleLines(120,550,280,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{120,350,280,70})){
                        if(IsMouseButtonPressed(0)){
                            histTen();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void histTen(){
    ClearBackground(RAYWHITE);

    Texture2D cell = LoadTexture("assets/cell.png");
    Texture2D pergaminho = LoadTexture("assets/pergaminho.png");
    Texture2D fHist0 = LoadTexture("assets/fundo10.png");
    Texture2D dora2 = LoadTexture("assets/dora2.png");

    const char nar01[50] = "Um estranho manda mensagem no WhatsApp de Dora.";
    const char nar02[42] = "O que ela deve fazer??";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;


        DrawTexture(fHist0, screenWidth, screenHeight, RAYWHITE);
        DrawTexture(cell, 700, 220, RAYWHITE);

        DrawText(TextSubtext(nar01, 0, framesCounter/5), 280, 40, 35, BLACK);
        DrawText(TextSubtext(nar02, 0, framesCounter/5), 280, 80, 35, BLACK);

        DrawTexture(pergaminho, 10, 200, RAYWHITE);
        DrawTexture(dora2, 1000, 500, RAYWHITE);

        DrawText("baixar o novo tema", 130, 370, 20, BLACK);
        DrawText("do app :D", 130, 390, 20, BLACK);
        DrawRectangleLines(120,350,280,70,BLACK);

        DrawText("mandar o link para todos", 130, 470, 20, BLACK);
        DrawText("os seus amiguinhos", 130, 490, 20, BLACK);
        DrawRectangleLines(120,450,280,70,BLACK);

        DrawText("bloquear numeros de", 130, 570, 20, BLACK);
        DrawText("estranhos", 130, 590, 20, BLACK);
        DrawRectangleLines(120,550,280,70,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{120,550,280,70})){
                        if(IsMouseButtonPressed(0)){
                            telaFinal();
                        }
                }

//-------------------------------------------------------------------------------------
        EndDrawing();
    }
        menuinit();

}

void telaFinal(){
    ClearBackground(RAYWHITE);

    Texture2D fFinal = LoadTexture("assets/fFinal.png");
    Texture2D dora2 = LoadTexture("assets/dora2.png");
    Texture2D dustin = LoadTexture("assets/dustin.png");
    Texture2D link = LoadTexture("assets/link.png");
    Texture2D goku2 = LoadTexture("assets/goku2.png");
    Texture2D shrek = LoadTexture("assets/shrek.png");
    Texture2D zeze = LoadTexture("assets/zezinho.png");
    Texture2D fogos = LoadTexture("assets/fogos.png");

    const char nar111[54] = "Parabens voce conseguiu completar todas as historias!";

    int framesCounter = 0;

    while (!WindowShouldClose())    // Janela do jogo, aperta esc para sair
    {
        BeginDrawing();
        aux++;

        framesCounter++;

        DrawTexture(fFinal, screenWidth, screenHeight, RAYWHITE);

        DrawTexture(dora2, 640, 240, RAYWHITE);
        DrawTexture(zeze, 1120, 420, RAYWHITE);
        DrawTexture(link, 400, 430, RAYWHITE);
        DrawTexture(goku2, 200, 420, RAYWHITE);
        DrawTexture(dustin, 660, 480, RAYWHITE);
        DrawTexture(shrek, 850, 420, RAYWHITE);
        DrawTexture(fogos, 1070, 52, RAYWHITE);
        DrawTexture(fogos, 530, 52, RAYWHITE);
        DrawTexture(fogos, 52, 52, RAYWHITE);

        DrawText(TextSubtext(nar111, 0, framesCounter/5), 50, 140, 45, BLACK);

        DrawText("Voltar para o menu!", 130, 370, 25, BLACK);
        DrawRectangleLines(121,351,281,71,BLACK);

        if(CheckCollisionPointRec(GetMousePosition(),{121,351,281,71})){
                        if(IsMouseButtonPressed(0)){
                            aux=0;
                            menuinit();
                }
        }

        EndDrawing();
    }
        CloseWindow();
    }
