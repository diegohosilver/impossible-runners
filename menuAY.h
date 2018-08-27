#ifndef MENUAY_H_INCLUDED
#define MENUAY_H_INCLUDED

void mostrarMenuAyuda(){

BITMAP *cursor = load_bitmap("recursos/cursor.bmp", NULL);
BITMAP *buffer = create_bitmap(600, 450);

//Menu

BITMAP *ayuda = load_bitmap("ayuda/ayuda.bmp", NULL);
BITMAP *ayudaS = load_bitmap("ayuda/ayudaS.bmp", NULL);

bool menu = true;

while (menu){

    if(mouse_x > 16 && mouse_x < 88 && mouse_y > 407 && mouse_y < 429){
        blit(ayudaS, buffer, 0, 0, 0, 0, 600, 450);
        if(mouse_b & 1){
            menu = false;
        }
    }

     else blit(ayuda, buffer, 0, 0, 0, 0, 600, 450);
        masked_blit(cursor, buffer,0,0, mouse_x, mouse_y, 13, 22);
        blit(buffer,screen, 0,0,0,0,600,450 );
}
    destroy_bitmap(buffer);
    destroy_bitmap(ayuda);
    destroy_bitmap(ayudaS);
    return;
}

#endif // MENUAY_H_INCLUDED
