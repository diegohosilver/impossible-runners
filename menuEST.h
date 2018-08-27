#ifndef MENUEST_H_INCLUDED
#define MENUEST_H_INCLUDED

void mostrarMenuEST(){

calcularMuertesTotal();

BITMAP *cursor = load_bitmap("recursos/cursor.bmp", NULL);
BITMAP *buffer = create_bitmap(600, 450);
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

//Menu
BITMAP *est = load_bitmap("menu/1.bmp", NULL);

bool menu = true;
bool release = false;
int flag = 4;
int Muertes;
int digit;
int Pos1 = 0;
int Pos2 = 0;
int Pos3 = 0;
int Pos4 = 0;

while(menu){
        if ( mouse_x > 7 && mouse_x < 152 && mouse_y > 422 && mouse_y < 441){
            while ( mouse_b & 1){
                release = true;
            }
            if(release)menu = false;
            release = false;
            }
blit(est, buffer, 0, 0, 0, 0, 600, 450);

//HARDCODE
flag = 4;
Muertes = getMuertesTotal();
digit=Muertes;
while(flag>0){
    switch (flag){
case 4:
    Pos4 = digit%10;
    digit/=10;
    break;
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
  switch(Pos4){
        case 1:
            draw_sprite(buffer, Num1, 500, 14);
            break;
        case 2:
            draw_sprite(buffer, Num2, 500, 14);
            break;
        case 3:
            draw_sprite(buffer, Num3, 500, 14);
            break;
        case 4:
            draw_sprite(buffer, Num4, 500, 14);
            break;
        case 5:
            draw_sprite(buffer, Num5, 500, 14);
            break;
        case 6:
            draw_sprite(buffer, Num6, 500, 14);
            break;
        case 7:
            draw_sprite(buffer, Num7, 500, 14);
            break;
        case 8:
            draw_sprite(buffer, Num8, 500, 14);
            break;
        case 9:
            draw_sprite(buffer, Num9, 500, 14);
            break;
        case 0:
            draw_sprite(buffer, Num0, 500, 14);
            break;
            }
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 460, 14);
            break;
        case 2:
            draw_sprite(buffer, Num2, 460, 14);
            break;
        case 3:
            draw_sprite(buffer, Num3, 460, 14);
            break;
        case 4:
            draw_sprite(buffer, Num4, 460, 14);
            break;
        case 5:
            draw_sprite(buffer, Num5, 460, 14);
            break;
        case 6:
            draw_sprite(buffer, Num6, 460, 14);
            break;
        case 7:
            draw_sprite(buffer, Num7, 460, 14);
            break;
        case 8:
            draw_sprite(buffer, Num8, 460, 14);
            break;
        case 9:
            draw_sprite(buffer, Num9, 460, 14);
            break;
        case 0:
            draw_sprite(buffer, Num0, 460, 14);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 420, 14);
            break;
        case 2:
            draw_sprite(buffer, Num2, 420, 14);
            break;
        case 3:
            draw_sprite(buffer, Num3, 420, 14);
            break;
        case 4:
            draw_sprite(buffer, Num4, 420, 14);
            break;
        case 5:
            draw_sprite(buffer, Num5, 420, 14);
            break;
        case 6:
            draw_sprite(buffer, Num6, 420, 14);
            break;
        case 7:
            draw_sprite(buffer, Num7, 420, 14);
            break;
        case 8:
            draw_sprite(buffer, Num8, 420, 14);
            break;
        case 9:
            draw_sprite(buffer, Num9, 420, 14);
            break;
        case 0:
            draw_sprite(buffer, Num0, 420, 14);
            break;
            }
            switch(Pos1){
       case 1:
            draw_sprite(buffer, Num1, 380, 14);
            break;
        case 2:
            draw_sprite(buffer, Num2, 380, 14);
            break;
        case 3:
            draw_sprite(buffer, Num3, 380, 14);
            break;
        case 4:
            draw_sprite(buffer, Num4, 380, 14);
            break;
        case 5:
            draw_sprite(buffer, Num5, 380, 14);
            break;
        case 6:
            draw_sprite(buffer, Num6, 380, 14);
            break;
        case 7:
            draw_sprite(buffer, Num7, 380, 14);
            break;
        case 8:
            draw_sprite(buffer, Num8, 380, 14);
            break;
        case 9:
            draw_sprite(buffer, Num9, 380, 14);
            break;
        case 0:
            draw_sprite(buffer, Num0, 380, 14);
            break;
            }
//endof HARDCODE


//HARDCODE
flag = 4;
Muertes = getMuertesBH();
digit=Muertes;
while(flag>0){
    switch (flag){
case 4:
    Pos4 = digit%10;
    digit/=10;
    break;
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
  switch(Pos4){
        case 1:
            draw_sprite(buffer, Num1, 500, 120);
            break;
        case 2:
            draw_sprite(buffer, Num2, 500, 120);
            break;
        case 3:
            draw_sprite(buffer, Num3, 500, 120);
            break;
        case 4:
            draw_sprite(buffer, Num4, 500, 120);
            break;
        case 5:
            draw_sprite(buffer, Num5, 500, 120);
            break;
        case 6:
            draw_sprite(buffer, Num6, 500, 120);
            break;
        case 7:
            draw_sprite(buffer, Num7, 500, 120);
            break;
        case 8:
            draw_sprite(buffer, Num8, 500, 120);
            break;
        case 9:
            draw_sprite(buffer, Num9, 500, 120);
            break;
        case 0:
            draw_sprite(buffer, Num0, 500, 120);
            break;
            }
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 460, 120);
            break;
        case 2:
            draw_sprite(buffer, Num2, 460, 120);
            break;
        case 3:
            draw_sprite(buffer, Num3, 460, 120);
            break;
        case 4:
            draw_sprite(buffer, Num4, 460, 120);
            break;
        case 5:
            draw_sprite(buffer, Num5, 460, 120);
            break;
        case 6:
            draw_sprite(buffer, Num6, 460, 120);
            break;
        case 7:
            draw_sprite(buffer, Num7, 460, 120);
            break;
        case 8:
            draw_sprite(buffer, Num8, 460, 120);
            break;
        case 9:
            draw_sprite(buffer, Num9, 460, 120);
            break;
        case 0:
            draw_sprite(buffer, Num0, 460, 120);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 420, 120);
            break;
        case 2:
            draw_sprite(buffer, Num2, 420, 120);
            break;
        case 3:
            draw_sprite(buffer, Num3, 420, 120);
            break;
        case 4:
            draw_sprite(buffer, Num4, 420, 120);
            break;
        case 5:
            draw_sprite(buffer, Num5, 420, 120);
            break;
        case 6:
            draw_sprite(buffer, Num6, 420, 120);
            break;
        case 7:
            draw_sprite(buffer, Num7, 420, 120);
            break;
        case 8:
            draw_sprite(buffer, Num8, 420, 120);
            break;
        case 9:
            draw_sprite(buffer, Num9, 420, 120);
            break;
        case 0:
            draw_sprite(buffer, Num0, 420, 120);
            break;
            }
            switch(Pos1){
       case 1:
            draw_sprite(buffer, Num1, 380, 120);
            break;
        case 2:
            draw_sprite(buffer, Num2, 380, 120);
            break;
        case 3:
            draw_sprite(buffer, Num3, 380, 120);
            break;
        case 4:
            draw_sprite(buffer, Num4, 380, 120);
            break;
        case 5:
            draw_sprite(buffer, Num5, 380, 120);
            break;
        case 6:
            draw_sprite(buffer, Num6, 380, 120);
            break;
        case 7:
            draw_sprite(buffer, Num7, 380, 120);
            break;
        case 8:
            draw_sprite(buffer, Num8, 380, 120);
            break;
        case 9:
            draw_sprite(buffer, Num9, 380, 120);
            break;
        case 0:
            draw_sprite(buffer, Num0, 380, 120);
            break;
            }
//endof HARDCODE


//HARDCODE
flag = 4;
Muertes = getMuertesSO();
digit=Muertes;
while(flag>0){
    switch (flag){
case 4:
    Pos4 = digit%10;
    digit/=10;
    break;
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
  switch(Pos4){
        case 1:
            draw_sprite(buffer, Num1, 500, 182);
            break;
        case 2:
            draw_sprite(buffer, Num2, 500, 182);
            break;
        case 3:
            draw_sprite(buffer, Num3, 500, 182);
            break;
        case 4:
            draw_sprite(buffer, Num4, 500, 182);
            break;
        case 5:
            draw_sprite(buffer, Num5, 500, 182);
            break;
        case 6:
            draw_sprite(buffer, Num6, 500, 182);
            break;
        case 7:
            draw_sprite(buffer, Num7, 500, 182);
            break;
        case 8:
            draw_sprite(buffer, Num8, 500, 182);
            break;
        case 9:
            draw_sprite(buffer, Num9, 500, 182);
            break;
        case 0:
            draw_sprite(buffer, Num0, 500, 182);
            break;
            }
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 460, 182);
            break;
        case 2:
            draw_sprite(buffer, Num2, 460, 182);
            break;
        case 3:
            draw_sprite(buffer, Num3, 460, 182);
            break;
        case 4:
            draw_sprite(buffer, Num4, 460, 182);
            break;
        case 5:
            draw_sprite(buffer, Num5, 460, 182);
            break;
        case 6:
            draw_sprite(buffer, Num6, 460, 182);
            break;
        case 7:
            draw_sprite(buffer, Num7, 460, 182);
            break;
        case 8:
            draw_sprite(buffer, Num8, 460, 182);
            break;
        case 9:
            draw_sprite(buffer, Num9, 460, 182);
            break;
        case 0:
            draw_sprite(buffer, Num0, 460, 182);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 420, 182);
            break;
        case 2:
            draw_sprite(buffer, Num2, 420, 182);
            break;
        case 3:
            draw_sprite(buffer, Num3, 420, 182);
            break;
        case 4:
            draw_sprite(buffer, Num4, 420, 182);
            break;
        case 5:
            draw_sprite(buffer, Num5, 420, 182);
            break;
        case 6:
            draw_sprite(buffer, Num6, 420, 182);
            break;
        case 7:
            draw_sprite(buffer, Num7, 420, 182);
            break;
        case 8:
            draw_sprite(buffer, Num8, 420, 182);
            break;
        case 9:
            draw_sprite(buffer, Num9, 420, 182);
            break;
        case 0:
            draw_sprite(buffer, Num0, 420, 182);
            break;
            }
            switch(Pos1){
       case 1:
            draw_sprite(buffer, Num1, 380, 182);
            break;
        case 2:
            draw_sprite(buffer, Num2, 380, 182);
            break;
        case 3:
            draw_sprite(buffer, Num3, 380, 182);
            break;
        case 4:
            draw_sprite(buffer, Num4, 380, 182);
            break;
        case 5:
            draw_sprite(buffer, Num5, 380, 182);
            break;
        case 6:
            draw_sprite(buffer, Num6, 380, 182);
            break;
        case 7:
            draw_sprite(buffer, Num7, 380, 182);
            break;
        case 8:
            draw_sprite(buffer, Num8, 380, 182);
            break;
        case 9:
            draw_sprite(buffer, Num9, 380, 182);
            break;
        case 0:
            draw_sprite(buffer, Num0, 380, 182);
            break;
            }
//endof HARDCODE


//HARDCODE
flag = 4;
Muertes = getMuertesMI();
digit=Muertes;
while(flag>0){
    switch (flag){
case 4:
    Pos4 = digit%10;
    digit/=10;
    break;
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
  switch(Pos4){
        case 1:
            draw_sprite(buffer, Num1, 500, 242);
            break;
        case 2:
            draw_sprite(buffer, Num2, 500, 242);
            break;
        case 3:
            draw_sprite(buffer, Num3, 500, 242);
            break;
        case 4:
            draw_sprite(buffer, Num4, 500, 242);
            break;
        case 5:
            draw_sprite(buffer, Num5, 500, 242);
            break;
        case 6:
            draw_sprite(buffer, Num6, 500, 242);
            break;
        case 7:
            draw_sprite(buffer, Num7, 500, 242);
            break;
        case 8:
            draw_sprite(buffer, Num8, 500, 242);
            break;
        case 9:
            draw_sprite(buffer, Num9, 500, 242);
            break;
        case 0:
            draw_sprite(buffer, Num0, 500, 242);
            break;
            }
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 460, 242);
            break;
        case 2:
            draw_sprite(buffer, Num2, 460, 242);
            break;
        case 3:
            draw_sprite(buffer, Num3, 460, 242);
            break;
        case 4:
            draw_sprite(buffer, Num4, 460, 242);
            break;
        case 5:
            draw_sprite(buffer, Num5, 460, 242);
            break;
        case 6:
            draw_sprite(buffer, Num6, 460, 242);
            break;
        case 7:
            draw_sprite(buffer, Num7, 460, 242);
            break;
        case 8:
            draw_sprite(buffer, Num8, 460, 242);
            break;
        case 9:
            draw_sprite(buffer, Num9, 460, 242);
            break;
        case 0:
            draw_sprite(buffer, Num0, 460, 242);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 420, 242);
            break;
        case 2:
            draw_sprite(buffer, Num2, 420, 242);
            break;
        case 3:
            draw_sprite(buffer, Num3, 420, 242);
            break;
        case 4:
            draw_sprite(buffer, Num4, 420, 242);
            break;
        case 5:
            draw_sprite(buffer, Num5, 420, 242);
            break;
        case 6:
            draw_sprite(buffer, Num6, 420, 242);
            break;
        case 7:
            draw_sprite(buffer, Num7, 420, 242);
            break;
        case 8:
            draw_sprite(buffer, Num8, 420, 242);
            break;
        case 9:
            draw_sprite(buffer, Num9, 420, 242);
            break;
        case 0:
            draw_sprite(buffer, Num0, 420, 242);
            break;
            }
            switch(Pos1){
       case 1:
            draw_sprite(buffer, Num1, 380, 242);
            break;
        case 2:
            draw_sprite(buffer, Num2, 380, 242);
            break;
        case 3:
            draw_sprite(buffer, Num3, 380, 242);
            break;
        case 4:
            draw_sprite(buffer, Num4, 380, 242);
            break;
        case 5:
            draw_sprite(buffer, Num5, 380, 242);
            break;
        case 6:
            draw_sprite(buffer, Num6, 380, 242);
            break;
        case 7:
            draw_sprite(buffer, Num7, 380, 242);
            break;
        case 8:
            draw_sprite(buffer, Num8, 380, 242);
            break;
        case 9:
            draw_sprite(buffer, Num9, 380, 242);
            break;
        case 0:
            draw_sprite(buffer, Num0, 380, 242);
            break;
            }
//endof HARDCODE

//HARDCODE
flag = 4;
Muertes = getMuertesSA();
digit=Muertes;
while(flag>0){
    switch (flag){
case 4:
    Pos4 = digit%10;
    digit/=10;
    break;
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
  switch(Pos4){
        case 1:
            draw_sprite(buffer, Num1, 500, 302);
            break;
        case 2:
            draw_sprite(buffer, Num2, 500, 302);
            break;
        case 3:
            draw_sprite(buffer, Num3, 500, 302);
            break;
        case 4:
            draw_sprite(buffer, Num4, 500, 302);
            break;
        case 5:
            draw_sprite(buffer, Num5, 500, 302);
            break;
        case 6:
            draw_sprite(buffer, Num6, 500, 302);
            break;
        case 7:
            draw_sprite(buffer, Num7, 500, 302);
            break;
        case 8:
            draw_sprite(buffer, Num8, 500, 302);
            break;
        case 9:
            draw_sprite(buffer, Num9, 500, 302);
            break;
        case 0:
            draw_sprite(buffer, Num0, 500, 302);
            break;
            }
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 460, 302);
            break;
        case 2:
            draw_sprite(buffer, Num2, 460, 302);
            break;
        case 3:
            draw_sprite(buffer, Num3, 460, 302);
            break;
        case 4:
            draw_sprite(buffer, Num4, 460, 302);
            break;
        case 5:
            draw_sprite(buffer, Num5, 460, 302);
            break;
        case 6:
            draw_sprite(buffer, Num6, 460, 302);
            break;
        case 7:
            draw_sprite(buffer, Num7, 460, 302);
            break;
        case 8:
            draw_sprite(buffer, Num8, 460, 302);
            break;
        case 9:
            draw_sprite(buffer, Num9, 460, 302);
            break;
        case 0:
            draw_sprite(buffer, Num0, 460, 302);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 420, 302);
            break;
        case 2:
            draw_sprite(buffer, Num2, 420, 302);
            break;
        case 3:
            draw_sprite(buffer, Num3, 420, 302);
            break;
        case 4:
            draw_sprite(buffer, Num4, 420, 302);
            break;
        case 5:
            draw_sprite(buffer, Num5, 420, 302);
            break;
        case 6:
            draw_sprite(buffer, Num6, 420, 302);
            break;
        case 7:
            draw_sprite(buffer, Num7, 420, 302);
            break;
        case 8:
            draw_sprite(buffer, Num8, 420, 302);
            break;
        case 9:
            draw_sprite(buffer, Num9, 420, 302);
            break;
        case 0:
            draw_sprite(buffer, Num0, 420, 302);
            break;
            }
            switch(Pos1){
       case 1:
            draw_sprite(buffer, Num1, 380, 302);
            break;
        case 2:
            draw_sprite(buffer, Num2, 380, 302);
            break;
        case 3:
            draw_sprite(buffer, Num3, 380, 302);
            break;
        case 4:
            draw_sprite(buffer, Num4, 380, 302);
            break;
        case 5:
            draw_sprite(buffer, Num5, 380, 302);
            break;
        case 6:
            draw_sprite(buffer, Num6, 380, 302);
            break;
        case 7:
            draw_sprite(buffer, Num7, 380, 302);
            break;
        case 8:
            draw_sprite(buffer, Num8, 380, 302);
            break;
        case 9:
            draw_sprite(buffer, Num9, 380, 302);
            break;
        case 0:
            draw_sprite(buffer, Num0, 380, 302);
            break;
            }
//endof HARDCODE

//HARDCODE
flag = 4;
Muertes = getMuertesHO();
digit=Muertes;
while(flag>0){
    switch (flag){
case 4:
    Pos4 = digit%10;
    digit/=10;
    break;
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
  switch(Pos4){
        case 1:
            draw_sprite(buffer, Num1, 500, 362);
            break;
        case 2:
            draw_sprite(buffer, Num2, 500, 362);
            break;
        case 3:
            draw_sprite(buffer, Num3, 500, 362);
            break;
        case 4:
            draw_sprite(buffer, Num4, 500, 362);
            break;
        case 5:
            draw_sprite(buffer, Num5, 500, 362);
            break;
        case 6:
            draw_sprite(buffer, Num6, 500, 362);
            break;
        case 7:
            draw_sprite(buffer, Num7, 500, 362);
            break;
        case 8:
            draw_sprite(buffer, Num8, 500, 362);
            break;
        case 9:
            draw_sprite(buffer, Num9, 500, 362);
            break;
        case 0:
            draw_sprite(buffer, Num0, 500, 362);
            break;
            }
           switch(Pos3){
        case 1:
            draw_sprite(buffer, Num1, 460, 362);
            break;
        case 2:
            draw_sprite(buffer, Num2, 460, 362);
            break;
        case 3:
            draw_sprite(buffer, Num3, 460, 362);
            break;
        case 4:
            draw_sprite(buffer, Num4, 460, 362);
            break;
        case 5:
            draw_sprite(buffer, Num5, 460, 362);
            break;
        case 6:
            draw_sprite(buffer, Num6, 460, 362);
            break;
        case 7:
            draw_sprite(buffer, Num7, 460, 362);
            break;
        case 8:
            draw_sprite(buffer, Num8, 460, 362);
            break;
        case 9:
            draw_sprite(buffer, Num9, 460, 362);
            break;
        case 0:
            draw_sprite(buffer, Num0, 460, 362);
            break;
            }
             switch(Pos2){
        case 1:
            draw_sprite(buffer, Num1, 420, 362);
            break;
        case 2:
            draw_sprite(buffer, Num2, 420, 362);
            break;
        case 3:
            draw_sprite(buffer, Num3, 420, 362);
            break;
        case 4:
            draw_sprite(buffer, Num4, 420, 362);
            break;
        case 5:
            draw_sprite(buffer, Num5, 420, 362);
            break;
        case 6:
            draw_sprite(buffer, Num6, 420, 362);
            break;
        case 7:
            draw_sprite(buffer, Num7, 420, 362);
            break;
        case 8:
            draw_sprite(buffer, Num8, 420, 362);
            break;
        case 9:
            draw_sprite(buffer, Num9, 420, 362);
            break;
        case 0:
            draw_sprite(buffer, Num0, 420, 362);
            break;
            }
            switch(Pos1){
       case 1:
            draw_sprite(buffer, Num1, 380, 362);
            break;
        case 2:
            draw_sprite(buffer, Num2, 380, 362);
            break;
        case 3:
            draw_sprite(buffer, Num3, 380, 362);
            break;
        case 4:
            draw_sprite(buffer, Num4, 380, 362);
            break;
        case 5:
            draw_sprite(buffer, Num5, 380, 362);
            break;
        case 6:
            draw_sprite(buffer, Num6, 380, 362);
            break;
        case 7:
            draw_sprite(buffer, Num7, 380, 362);
            break;
        case 8:
            draw_sprite(buffer, Num8, 380, 362);
            break;
        case 9:
            draw_sprite(buffer, Num9, 380, 362);
            break;
        case 0:
            draw_sprite(buffer, Num0, 380, 362);
            break;
            }
//endof HARDCODE


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
    return;
}


#endif // MENUEST_H_INCLUDED
