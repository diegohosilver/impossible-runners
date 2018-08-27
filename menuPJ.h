#ifndef MENUPJ_H_INCLUDED
#define MENUPJ_H_INCLUDED

Personaje PJ;

int mostrarMenuPJ(){
//Personajes
BITMAP *a = load_bitmap("PJ/a.bmp", NULL);
BITMAP *b = load_bitmap("PJ/b.bmp", NULL);
BITMAP *c = load_bitmap("PJ/c.bmp", NULL);
BITMAP *d = load_bitmap("PJ/d.bmp", NULL);
BITMAP *e = load_bitmap("PJ/e.bmp", NULL);
BITMAP *f = load_bitmap("PJ/f.bmp", NULL);
BITMAP *g = load_bitmap("PJ/g.bmp", NULL);
BITMAP *h = load_bitmap("PJ/h.bmp", NULL);
BITMAP *i = load_bitmap("PJ/i.bmp", NULL);
BITMAP *j = load_bitmap("PJ/j.bmp", NULL);
BITMAP *k = load_bitmap("PJ/k.bmp", NULL);
BITMAP *l = load_bitmap("PJ/l.bmp", NULL);
BITMAP *m = load_bitmap("PJ/m.bmp", NULL);
BITMAP *n = load_bitmap("PJ/n.bmp", NULL);
BITMAP *o = load_bitmap("PJ/o.bmp", NULL);
BITMAP *PJ1 = create_bitmap(39,39);
BITMAP *PJ2 = create_bitmap(39,39);
BITMAP *PJ3 = create_bitmap(39,39);
BITMAP *PJ4 = create_bitmap(39,39);
BITMAP *PJ5 = create_bitmap(39,39);

//Menu
BITMAP *p1 = load_bitmap("pers/pers1.bmp", NULL);
BITMAP *p2a = load_bitmap("pers/pers2a.bmp", NULL);
BITMAP *p2b = load_bitmap("pers/pers2b.bmp", NULL);
BITMAP *p2c = load_bitmap("pers/pers2c.bmp", NULL);
BITMAP *p2d = load_bitmap("pers/pers2d.bmp", NULL);
BITMAP *p2e = load_bitmap("pers/pers2e.bmp", NULL);
BITMAP *p3 = load_bitmap("pers/pers3.bmp", NULL);
BITMAP *p4 = load_bitmap("pers/pers4.bmp", NULL);
BITMAP *p5 = load_bitmap("pers/pers5.bmp", NULL);
BITMAP *cursor = load_bitmap("recursos/cursor.bmp", NULL);
BITMAP *buffer = create_bitmap(600, 450);

//Variables
int Nromenu = 1;
bool menu = true, release = false;
while(menu){

        //Cuadrado 1
    if ( mouse_x > 53 && mouse_x < 126 && mouse_y > 200 && mouse_y < 275){
            blit(p2a, buffer, 0, 0, 0, 0, 600, 450);

            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}
while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                switch(Nromenu){
                    case 1:
                return 1;
                    break;
                    case 2:
                return 6;
                    break;
                    case 3:
                return 11;
                    break;
                }
                }
                release = false;
            }

        //Cuadrado 2
             else if ( mouse_x > 158 && mouse_x < 231 && mouse_y > 200 && mouse_y < 275){
            blit(p2b, buffer, 0, 0, 0, 0, 600, 450);
            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}
while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                switch(Nromenu){
                    case 1:
                return 2;
                    break;
                    case 2:
                return 7;
                    break;
                    case 3:
                return 12;
                    break;
                }
                }
                release = false;


        }

        //Cuadrado 3
        else if ( mouse_x > 267 && mouse_x < 340 && mouse_y > 200 && mouse_y < 275){
            blit(p2c, buffer, 0, 0, 0, 0, 600, 450);
            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}
while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                switch(Nromenu){
                    case 1:
                return 3;
                    break;
                    case 2:
                return 8;
                    break;
                    case 3:
                return 13;
                    break;
                }
                }
                release = false;

        }

        //Cuadrado 4
        else if ( mouse_x > 369 && mouse_x < 440 && mouse_y > 200 && mouse_y < 275){
            blit(p2d, buffer, 0, 0, 0, 0, 600, 450);
            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}
while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                switch(Nromenu){
                    case 1:
                return 4;
                    break;
                    case 2:
                return 9;
                    break;
                    case 3:
                return 14;
                    break;
                }
                }
                release = false;

        }

        //Cuadrado 5
         else if ( mouse_x > 464 && mouse_x < 535 && mouse_y > 200 && mouse_y < 275){
            blit(p2e, buffer, 0, 0, 0, 0, 600, 450);
            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}
while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                switch(Nromenu){
                    case 1:
                return 5;
                    break;
                    case 2:
                return 10;
                    break;
                    case 3:
                return 15;
                    break;
                }
                }
                release = false;


        }

        //Salir
        else if ( mouse_x > 509 && mouse_x < 580 && mouse_y > 410 && mouse_y < 429){
            blit(p3, buffer, 0, 0, 0, 0, 600, 450);
            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}

            if ( mouse_b & 1 ){
                menu = false;
            }

        }

        //Menu Siguiente
        else if (mouse_x > 514 && mouse_x < 577 && mouse_y > 322 && mouse_y < 353){
            blit(p4, buffer, 0, 0, 0, 0, 600, 450);
            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}
                while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                    if(Nromenu==3) Nromenu = 1;
                    else Nromenu ++;
                }
                release = false;
            }

        //Menu Anterior
        else if (mouse_x > 17 && mouse_x < 82 && mouse_y > 322 && mouse_y < 353){
            blit(p5, buffer, 0, 0, 0, 0, 600, 450);
            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}
while ( mouse_b & 1 ){
                release = true;
                }
                if (release) {
                    if(Nromenu==1) Nromenu = 3;
                    else Nromenu --;
                }
                release = false;
            }

        else{
            blit(p1, buffer, 0, 0, 0, 0, 600, 450);
            if (Nromenu == 1){
            draw_sprite(buffer, a, 70, 210);
            draw_sprite(buffer, b, 175, 210);
            draw_sprite(buffer, c, 288, 210);
            draw_sprite(buffer, d, 390, 210);
            draw_sprite(buffer, e, 483, 210);
}
else if (Nromenu == 2){
            draw_sprite(buffer, f, 70, 210);
            draw_sprite(buffer, g, 175, 210);
            draw_sprite(buffer, h, 288, 210);
            draw_sprite(buffer, i, 390, 210);
            draw_sprite(buffer, j, 483, 210);
}
else if (Nromenu == 3){
            draw_sprite(buffer, k, 70, 210);
            draw_sprite(buffer, l, 175, 210);
            draw_sprite(buffer, m, 288, 210);
            draw_sprite(buffer, n, 390, 210);
            draw_sprite(buffer, o, 483, 210);
}

        }
        masked_blit(cursor, buffer,0,0, mouse_x, mouse_y, 13, 22);
        blit(buffer,screen, 0,0,0,0,600,450 );
    }
    destroy_bitmap(buffer);
    return 0;
}


#endif // MENUPJ_H_INCLUDED
