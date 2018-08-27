#ifndef MENUJG_H_INCLUDED
#define MENUJG_H_INCLUDED

void juego(int, int);

int abrir1(){
            int Progreso;
            FILE *pFile;
            pFile = fopen ("Progreso1.DAT", "rb");
            fread (&Progreso , sizeof(int), 1, pFile);
            fclose (pFile);
            return Progreso;
}

int abrir2(){
            int Progreso;
            FILE *pFile;
            pFile = fopen ("Progreso2.DAT", "rb");
            fread (&Progreso , sizeof(int), 1, pFile);
            fclose (pFile);
            return Progreso;
}

int abrir3(){
            int Progreso;
            FILE *pFile;
            pFile = fopen ("Progreso3.DAT", "rb");
            fread (&Progreso , sizeof(int), 1, pFile);
            fclose (pFile);
            return Progreso;
}

int abrir4(){
            int Progreso;
            FILE *pFile;
            pFile = fopen ("Progreso4.DAT", "rb");
            fread (&Progreso , sizeof(int), 1, pFile);
            fclose (pFile);
            return Progreso;
}

int abrir5(){
            int Progreso;
            FILE *pFile;
            pFile = fopen ("Progreso5.DAT", "rb");
            fread (&Progreso , sizeof(int), 1, pFile);
            fclose (pFile);
            return Progreso;
}

void mostrarNum(int Pos1, int Pos2, int Pos3){

}

void mostrarMenuJG(SAMPLE *start, int NPJ){
BITMAP *cursor = load_bitmap("recursos/cursor.bmp", NULL);
BITMAP *buffer = create_bitmap(600, 450);

//Numeros
BITMAP *Num1 = load_bitmap("Numeros/1.bmp", NULL);
BITMAP *Num2 = load_bitmap("Numeros/2.bmp", NULL);
BITMAP *Num3 = load_bitmap("Numeros/3.bmp", NULL);
BITMAP *Num4 = load_bitmap("Numeros/4.bmp", NULL);
BITMAP *Num5 = load_bitmap("Numeros/5.bmp", NULL);
BITMAP *Num6 = load_bitmap("Numeros/6.bmp", NULL);
BITMAP *Num7 = load_bitmap("Numeros/7.bmp", NULL);
BITMAP *Num8 = load_bitmap("Numeros/8.bmp", NULL);
BITMAP *Num9 = load_bitmap("Numeros/9.bmp", NULL);
BITMAP *Num0 = load_bitmap("Numeros/0.bmp", NULL);

//Black Hole
BITMAP *B1 = load_bitmap("jogar/B/1.bmp", NULL);
BITMAP *B2 = load_bitmap("jogar/B/2.bmp", NULL);
BITMAP *B3 = load_bitmap("jogar/B/3.bmp", NULL);
BITMAP *B4 = load_bitmap("jogar/B/4.bmp", NULL);

//Sonic Masala
BITMAP *S1 = load_bitmap("jogar/S/1.bmp", NULL);
BITMAP *S2 = load_bitmap("jogar/S/2.bmp", NULL);
BITMAP *S3 = load_bitmap("jogar/S/3.bmp", NULL);
BITMAP *S4 = load_bitmap("jogar/S/4.bmp", NULL);
BITMAP *S5 = load_bitmap("jogar/S/5.bmp", NULL);

//Mistakes I've Made
BITMAP *M1 = load_bitmap("jogar/M/1.bmp", NULL);
BITMAP *M2 = load_bitmap("jogar/M/2.bmp", NULL);
BITMAP *M3 = load_bitmap("jogar/M/3.bmp", NULL);
BITMAP *M4 = load_bitmap("jogar/M/4.bmp", NULL);
BITMAP *M5 = load_bitmap("jogar/M/5.bmp", NULL);

//Saturn
BITMAP *SA1 = load_bitmap("jogar/SA/1.bmp", NULL);
BITMAP *SA2 = load_bitmap("jogar/SA/2.bmp", NULL);
BITMAP *SA3 = load_bitmap("jogar/SA/3.bmp", NULL);
BITMAP *SA4 = load_bitmap("jogar/SA/4.bmp", NULL);
BITMAP *SA5 = load_bitmap("jogar/SA/5.bmp", NULL);

//Holdin' On
BITMAP *H1 = load_bitmap("jogar/H/1.bmp", NULL);
BITMAP *H2 = load_bitmap("jogar/H/2.bmp", NULL);
BITMAP *H3 = load_bitmap("jogar/H/3.bmp", NULL);
BITMAP *H4 = load_bitmap("jogar/H/4.bmp", NULL);

bool menu = true;
int opc = 1, NNIV;
bool release = false;
int Progreso;
int flag = 3;
int digit;
int Pos1 = 0;
int Pos2 = 0;
int Pos3 = 0;

while(menu){

        //Black Hole
        if (opc == 1){
            blit(B1, buffer, 0, 0, 0, 0, 600, 450);


//HARDCODE
flag = 3;
Progreso = abrir1();
digit=Progreso;
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
              case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
        }

        if (opc == 1 && mouse_x > 168 && mouse_x < 432 && mouse_y > 51 && mouse_y < 83){
            blit(B2, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE

            while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                    NNIV = 1;
                    stop_sample(start);
                    juego(NPJ, NNIV);
                    flag = 3;
                    ContadorBH = ContadorMuertes;
                    ContadorBH += getMuertesBH();
                    guardarMuertesBH(ContadorBH);
                    ContadorMuertes = 0;
                    play_sample(start,100,150,1000,1);
                }
                release = false;
            }

        if(opc == 1 && mouse_x > 14 && mouse_x < 86 && mouse_y > 404 && mouse_y < 426){
            blit(B3, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
         case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
            while ( mouse_b & 1 ){
                release = true;
            }
            if(release)menu = false;
            release = false;
            }

        if(opc == 1 && mouse_x > 519 && mouse_x < 592 && mouse_y > 220 && mouse_y < 247){
            blit(B4, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release){
                opc = 2;
                }
                release = false;
            }

        //Sonic Masala
       if (opc == 2){
        blit(S1, buffer, 0, 0, 0, 0, 600, 450);
        flag = 3;
        Progreso = abrir2();
digit=Progreso;
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
       }

       if (opc == 2 && mouse_x > 137 && mouse_x < 451 && mouse_y > 53 && mouse_y < 90){
            blit(S2, buffer, 0, 0, 0, 0, 600, 450);
            while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
            while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                    NNIV = 2;
                    stop_sample(start);
                    juego(NPJ, NNIV);
                    flag = 3;
                    ContadorSO = ContadorMuertes;
                    ContadorSO += getMuertesSO();
                    guardarMuertesSO(ContadorSO);
                    ContadorMuertes = 0;
                    play_sample(start,100,150,1000,1);
                }
                release = false;
            }

        if(opc == 2 && mouse_x > 14 && mouse_x < 86 && mouse_y > 404 && mouse_y < 426){
            blit(S3, buffer, 0, 0, 0, 0, 600, 450);
            while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
            while ( mouse_b & 1 ){
                release = true;
            }
            if(release)menu = false;
            release = false;
            }

        if(opc == 2 && mouse_x > 519 && mouse_x < 592 && mouse_y > 220 && mouse_y < 247){
            blit(S4, buffer, 0, 0, 0, 0, 600, 450);
            while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    cout << Pos3;
    cout << endl;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release) opc = 3;
                release = false;
        }

        if(opc == 2 && mouse_x > 10 && mouse_x < 83 && mouse_y > 218 && mouse_y < 251){
            blit(S5, buffer, 0, 0, 0, 0, 600, 450);
            while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release){
                opc = 1;
                }
                release = false;
        }

        //Mistakes I've Made
        if(opc == 3){
                blit(M1, buffer, 0, 0, 0, 0, 600, 450);
                //HARDCODE
flag = 3;
Progreso = abrir3();
digit=Progreso;
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
        }

        if(opc == 3 && mouse_x > 85 && mouse_x < 502 && mouse_y > 39 && mouse_y < 83){
            blit(M2, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                        while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                    NNIV = 3;
                    stop_sample(start);
                    juego(NPJ, NNIV);
                    flag = 3;
                    ContadorMI = ContadorMuertes;
                    ContadorMI += getMuertesMI();
                    guardarMuertesMI(ContadorMI);
                    ContadorMuertes = 0;
                    play_sample(start,100,150,1000,1);
                }
                release = false;
            }

        if(opc == 3 && mouse_x > 14 && mouse_x < 86 && mouse_y > 404 && mouse_y < 426){
            blit(M3, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
            while ( mouse_b & 1 ){
                release = true;
            }
            if(release)menu = false;
            release = false;
            }

        if(opc == 3 && mouse_x > 519 && mouse_x < 592 && mouse_y > 220 && mouse_y < 247){
            blit(M4, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release) opc = 4;
                release = false;
        }

        if(opc == 3 && mouse_x > 10 && mouse_x < 83 && mouse_y > 218 && mouse_y < 251){
            blit(M5, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release) opc = 2;
                release = false;
        }

        //Saturn
        if(opc == 4) {
            blit(SA1, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
flag = 3;
Progreso = abrir4();
digit=Progreso;
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
        }

        if(opc == 4 && mouse_x > 220 && mouse_x < 378 && mouse_y > 49 && mouse_y < 90){
            blit(SA2, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
            while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                    NNIV = 4;
                    stop_sample(start);
                    juego(NPJ, NNIV);
                    flag = 3;
                    ContadorSA = ContadorMuertes;
                    ContadorBH += getMuertesSA();
                    guardarMuertesSA(ContadorSA);
                    ContadorMuertes = 0;
                    play_sample(start,100,150,1000,1);
                }
                release = false;
            }

        if(opc == 4 && mouse_x > 14 && mouse_x < 86 && mouse_y > 404 && mouse_y < 426){
            blit(SA3, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
         case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
            while ( mouse_b & 1 ){
                release = true;
            }
            if(release)menu = false;
            release = false;
            }

        if(opc == 4 && mouse_x > 519 && mouse_x < 592 && mouse_y > 220 && mouse_y < 247){
            blit(SA4, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release) opc = 5;
                release = false;
        }

        if(opc == 4 && mouse_x > 10 && mouse_x < 83 && mouse_y > 222 && mouse_y < 245){
            blit(SA5, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release) opc = 3;
                release = false;
        }

        //Holdin' On
        if(opc == 5) {
            blit(H1, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
flag = 3;
Progreso = abrir5();
digit=Progreso;
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
        }

        if(opc == 5 && mouse_x > 220 && mouse_x < 378 && mouse_y > 49 && mouse_y < 90){
            blit(H2, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
            while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                    NNIV = 5;
                    stop_sample(start);
                    juego(NPJ, NNIV);
                    flag = 3;
                    ContadorHO = ContadorMuertes;
                    ContadorHO += getMuertesHO();
                    guardarMuertesHO(ContadorHO);
                    ContadorMuertes = 0;
                    play_sample(start,100,150,1000,1);
                }
                release = false;
            }

        if(opc == 5 && mouse_x > 14 && mouse_x < 86 && mouse_y > 404 && mouse_y < 426){
            blit(H3, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
            while ( mouse_b & 1 ){
                release = true;
            }
            if(release)menu = false;
            release = false;
            }

        if(opc == 5 && mouse_x > 10 && mouse_x < 83 && mouse_y > 218 && mouse_y < 251){
            blit(H4, buffer, 0, 0, 0, 0, 600, 450);
            //HARDCODE
while(flag>0){
    switch (flag){
case 3:
    Pos3 = digit%10;
    digit/=10;
    break;
case 2:
    Pos2 = digit%10;
    digit/=10;
    break;
case 1:
    Pos1 = digit%10;
    break;
    }
flag--;
}
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 310, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 310, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 310, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 310, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 310, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 310, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 310, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 310, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 310, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 310, 270);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 270, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 270, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 270, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 270, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 270, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 270, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 270, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 270, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 270, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 270, 270);
            break;
            }
            switch(Pos1){
        case 1:
            draw_sprite(buffer, Num1, 230, 270);
            break;
        case 2:
            draw_sprite(buffer, Num2, 230, 270);
            break;
        case 3:
            draw_sprite(buffer, Num3, 230, 270);
            break;
        case 4:
            draw_sprite(buffer, Num4, 230, 270);
            break;
        case 5:
            draw_sprite(buffer, Num5, 230, 270);
            break;
        case 6:
            draw_sprite(buffer, Num6, 230, 270);
            break;
        case 7:
            draw_sprite(buffer, Num7, 230, 270);
            break;
        case 8:
            draw_sprite(buffer, Num8, 230, 270);
            break;
        case 9:
            draw_sprite(buffer, Num9, 230, 270);
            break;
        case 0:
            draw_sprite(buffer, Num0, 230, 270);
            break;
            }
//endof HARDCODE
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release) opc = 4;
                release = false;
        }
         masked_blit(cursor, buffer,0,0, mouse_x, mouse_y, 13, 22);
        blit(buffer,screen, 0,0,0,0,600,450 );
    }
    destroy_bitmap(buffer);
    destroy_bitmap(Num0);
    destroy_bitmap(Num1);
    destroy_bitmap(Num2);
    destroy_bitmap(Num3);
    destroy_bitmap(Num4);
    destroy_bitmap(Num5);
    destroy_bitmap(Num6);
    destroy_bitmap(Num7);
    destroy_bitmap(Num8);
    destroy_bitmap(Num9);
    destroy_bitmap(B1);
    destroy_bitmap(B2);
    destroy_bitmap(B3);
    destroy_bitmap(B4);
    destroy_bitmap(S1);
    destroy_bitmap(S2);
    destroy_bitmap(S3);
    destroy_bitmap(S4);
    destroy_bitmap(S5);
    destroy_bitmap(M1);
    destroy_bitmap(M2);
    destroy_bitmap(M3);
    destroy_bitmap(M4);
    destroy_bitmap(M5);
    destroy_bitmap(SA1);
    destroy_bitmap(SA2);
    destroy_bitmap(SA3);
    destroy_bitmap(SA4);
    destroy_bitmap(SA5);
    destroy_bitmap(H1);
    destroy_bitmap(H2);
    destroy_bitmap(H3);
    destroy_bitmap(H4);


    return;
}


#endif // MENUJG_H_INCLUDED
