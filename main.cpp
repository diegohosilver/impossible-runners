#include <allegro.h>
#include <iostream>

#include "global.h"
#include "personaje.h"
#include "inicia.h"
#include "inicia.cpp"
#include "camara.h"
#include "colision.h"
#include "mapa.h"
#include "menuPJ.h"
#include "menuJG.h"
#include "menuOPC.h"
#include "menuEST.h"
#include "menuAY.h"


using namespace std;



volatile long counter = 0;
void increment(){counter ++;}
END_OF_FUNCTION(increment);

void juego(int NPJ, int NNIV){

    BITMAP *buffer = create_bitmap(600, 450);
    BITMAP *cursor = load_bitmap("recursos/cursor.bmp", NULL);
    BITMAP *Nivel = load_bitmap("recursos/Nivel.bmp", NULL);

    SAMPLE *MusicaNivel;

    bool FinalNivel = false;

    Personaje PJ;
    camara cam;
    collision col;
    Mapa mapa;

    PJ.SetPJ(NPJ);
    PJ.Init();
    cam.Init();
    if(NNIV == 1){
        PJ.EnableMove();
        PJ.DisableJet();
        PJ.DisablePlane();
        col.Init();
        mapa.Init();
       MusicaNivel = mapa.GetBH();
    }
    if(NNIV == 2){
        PJ.EnableMove();
        PJ.DisableJet();
        PJ.DisablePlane();
        col.Init2();
        mapa.Init2();
        MusicaNivel = mapa.GetSO();
    }
    if(NNIV == 3){
       PJ.DisableMove();
        PJ.EnableJet();
        PJ.EnablePlane();
        col.Init3();
        mapa.Init3();
        MusicaNivel = mapa.GetMI();
    }
    else if(NNIV == 4){
        PJ.EnableMove();
        col.Init4();
        mapa.Init4();
        MusicaNivel = mapa.GetSA();
    }
    else if(NNIV == 5){
        PJ.EnableMove();
        col.Init5();
        mapa.Init5();
        MusicaNivel = mapa.GetHO();
    }


    play_sample(MusicaNivel,100,150,1000,0);

    bool Exit_Game = false;
    counter=0;


    while (!Exit_Game){

        //FPS / Update Loop
        while(counter > 0){

                //cmd
                if(key[KEY_ESC]) Exit_Game=true;

                //update
                if(PJ.GetX()>30000){
                FinalNivel = true;
                Exit_Game = true;
                }

                PJ.Update(NNIV);
                col.Update(PJ,cam,MusicaNivel,NNIV);
                cam.Update(PJ.GetX(), PJ.GetY(), PJ.GethDir());
                counter --;
        }

        //draw
        mapa.Draw(buffer, cam.GetAvancecamara());
        PJ.Draw(buffer, cam.GetAvancecamara());
        blit(buffer, screen, 0, 0, 0, 0, ScreenAncho, ScreenAlto);
        clear_bitmap(buffer);
    }

    while(FinalNivel){
        blit (Nivel, buffer, 0, 0, 0, 0, 600, 450);
        blit(buffer,screen, 0,0,0,0,600,450 );
        if(key[KEY_ENTER]) FinalNivel = false;
    }
    mapa.destroyer();
}

int main(){
    inicia_allegro();
    inicia_audio();
    install_mouse();
    install_timer();
    LOCK_VARIABLE (counter);
    LOCK_FUNCTION (increment);
    install_int_ex(increment, BPS_TO_TIMER(90));
    BITMAP *menu2 = load_bitmap("menu/2.bmp", NULL);
    BITMAP *menu2a = load_bitmap("menu/2a.bmp", NULL);
    BITMAP *menu2b = load_bitmap("menu/2b.bmp", NULL);
    BITMAP *menu2c = load_bitmap("menu/2c.bmp", NULL);
    BITMAP *menu2d = load_bitmap("menu/2d.bmp", NULL);
    BITMAP *menu2e = load_bitmap("menu/2e.bmp", NULL);
    BITMAP *menu2f = load_bitmap("menu/2f.bmp", NULL);
    BITMAP *cursor = load_bitmap("recursos/cursor.bmp", NULL);
    BITMAP *buffer = create_bitmap(600, 450);
    SAMPLE *start;

    bool Menu = true;
    bool release = false;

    int OPC = 1;

    start = load_wav("recursos/Inicio.wav");

    play_sample(start,100,150,1000,1);


    while(Menu){

        if ( mouse_x > 267 && mouse_x < 330 && mouse_y > 207 && mouse_y < 230){
            blit(menu2a, buffer, 0, 0, 0, 0, 600, 450);
            if ( mouse_b & 1 ){
            mostrarMenuJG(start, OPC);
            }
        }

        else if ( mouse_x > 226 && mouse_x < 376 && mouse_y > 249 && mouse_y < 267){
            blit(menu2b, buffer, 0, 0, 0, 0, 600, 450);
                if ( mouse_b & 1 ){
             OPC = mostrarMenuPJ();
            }
            }

        else if ( mouse_x > 249 && mouse_x < 343 && mouse_y > 291 && mouse_y < 314){
            blit(menu2c, buffer, 0, 0, 0, 0, 600, 450);
            if(mouse_b & 1){
                mostrarMenuAyuda();
            }

        }

        else if ( mouse_x > 241 && mouse_x < 356 && mouse_y > 329 && mouse_y < 356){
            blit(menu2d, buffer, 0, 0, 0, 0, 600, 450);
            if (mouse_b & 1){
                mostrarMenuOPC();
            }
        }

        else if ( mouse_x > 263 && mouse_x < 326 && mouse_y > 375 && mouse_y < 400){
            blit(menu2e, buffer, 0, 0, 0, 0, 600, 450);

            if ( mouse_b & 1 ){
                Menu = false;
            }
        }

            else if ( mouse_x > 7 && mouse_x < 152 && mouse_y > 422 && mouse_y < 441){
            blit(menu2f, buffer, 0, 0, 0, 0, 600, 450);
            while (mouse_b & 1){
            release = true;
            }
             if(release){
                 release = false;
                mostrarMenuEST();
             }
            }

        else{
            blit(menu2, buffer, 0, 0, 0, 0, 600, 450);
        }
        masked_blit(cursor, buffer,0,0, mouse_x, mouse_y, 13, 22);
        blit(buffer,screen, 0,0,0,0,600,450 );
    }
    //readkey();
    destroy_bitmap(buffer);


    return 0;
}
END_OF_MAIN();

/**
░░░░█░▀▄░░░░░░░░░░▄▄███▀
░░░░█░░░▀▄░▄▄▄▄▄░▄▀░░░█▀
░░░░░▀▄░░░▀░░░░░▀░░░▄▀
░░░░░░░▌░▄▄░░░▄▄░▐▀▀
░░░░░░▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█
░░░░░░▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█
░░░▄▀▀▐▀▀░░░░░░░▀▀▌▄▄▄░░░█
░░░█░░░▀▄░░░░░░░▄▀░░░░█▀▀▀
░░░░▀▄░░▀░░▀▀▀░░▀░░░▄█▀
**/

