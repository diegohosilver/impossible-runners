#ifndef MENUOPC_H_INCLUDED
#define MENUOPC_H_INCLUDED

void mostrarMenuOPC(){

BITMAP *cursor = load_bitmap("recursos/cursor.bmp", NULL);
BITMAP *buffer = create_bitmap(600, 450);

//Menu
BITMAP *opc = load_bitmap("Opc/fondo.bmp", NULL);
BITMAP *opc1 = load_bitmap("Opc/fondo1.bmp", NULL);
BITMAP *opc2 = load_bitmap("Opc/fondo2.bmp", NULL);
BITMAP *opc3 = load_bitmap("Opc/fondo3.bmp", NULL);
BITMAP *opc4 = load_bitmap("Opc/fondo4.bmp", NULL);
BITMAP *opc5 = load_bitmap("Opc/fondo5.bmp", NULL);
BITMAP *opc2T = load_bitmap("Opc/fondo2T.bmp", NULL);
BITMAP *opc2TT = load_bitmap("Opc/fondo2TT.bmp", NULL);
BITMAP *opc2TTT = load_bitmap("Opc/fondo2TTT.bmp", NULL);
BITMAP *opc2TTTT = load_bitmap("Opc/fondo2TTTT.bmp", NULL);
BITMAP *opc3T = load_bitmap("Opc/fondo3T.bmp", NULL);
BITMAP *opc3TT = load_bitmap("Opc/fondo3TT.bmp", NULL);

bool menu = true;
bool release = false;

while(menu){
    if (EnablePractice && mouse_x > 97 && mouse_x < 509 && mouse_y > 183 && mouse_y < 206){
        blit(opc2TT, buffer, 0, 0, 0, 0, 600, 450);
        if(MostrarMuertes){
         while ( mouse_b & 1){
                release = true;
            }
            if(release)MostrarMuertes = false;
            release = false;
            }
            else if (MostrarMuertes == false){
                 while ( mouse_b & 1){
                release = true;
            }
            if(release)MostrarMuertes = true;
            release = false;
            }
    }

    else if (EnablePractice == false && mouse_x > 97 && mouse_x < 509 && mouse_y > 183 && mouse_y < 206){
        blit(opc2, buffer, 0, 0, 0, 0, 600, 450);
        if(MostrarMuertes){
         while ( mouse_b & 1){
                release = true;
            }
            if(release)MostrarMuertes = false;
            release = false;
            }
            else if (MostrarMuertes == false){
                 while ( mouse_b & 1){
                release = true;
            }
            if(release)MostrarMuertes = true;
            release = false;
            }
    }

    else if (MostrarMuertes && EnablePractice == false && mouse_x > 206 && mouse_x < 393 && mouse_y > 259 && mouse_y < 283){
        blit(opc1, buffer, 0, 0, 0, 0, 600, 450);
        while (mouse_b & 1){
            release = true;
        }
        if(release){
    FILE * pFile;
    int Progreso;
    Progreso = 0;

    pFile = fopen ("Progreso1.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso2.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso3.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso4.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso5.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

     pFile = fopen ("MuertesBH.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesSO.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesMI.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesSA.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesHO.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesTOT.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);


    release = false;
        }
}

     else if (MostrarMuertes == false && EnablePractice == false && mouse_x > 206 && mouse_x < 393 && mouse_y > 259 && mouse_y < 283){
        blit(opc2T, buffer, 0, 0, 0, 0, 600, 450);
        while (mouse_b & 1){
            release = true;
        }
        if(release){
    FILE * pFile;
    int Progreso;
    Progreso = 0;

    pFile = fopen ("Progreso1.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso2.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso3.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso4.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso5.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

     pFile = fopen ("MuertesBH.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesSO.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesMI.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesSA.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesHO.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesTOT.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);


    release = false;
        }
}

else if (MostrarMuertes && EnablePractice && mouse_x > 206 && mouse_x < 393 && mouse_y > 259 && mouse_y < 283){
        blit(opc5, buffer, 0, 0, 0, 0, 600, 450);
        while (mouse_b & 1){
            release = true;
        }
        if(release){
    FILE * pFile;
    int Progreso;
    Progreso = 0;

    pFile = fopen ("Progreso1.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso2.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso3.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso4.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso5.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

     pFile = fopen ("MuertesBH.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesSO.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesMI.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesSA.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesHO.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesTOT.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);


    release = false;
        }
}

else if (MostrarMuertes == false && EnablePractice && mouse_x > 206 && mouse_x < 393 && mouse_y > 259 && mouse_y < 283){
        blit(opc2TTTT, buffer, 0, 0, 0, 0, 600, 450);
        while (mouse_b & 1){
            release = true;
        }
        if(release){
    FILE * pFile;
    int Progreso;
    Progreso = 0;

    pFile = fopen ("Progreso1.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso2.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso3.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso4.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("Progreso5.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

     pFile = fopen ("MuertesBH.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesSO.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesMI.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesSA.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesHO.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);

    pFile = fopen ("MuertesTOT.DAT", "wb");
    fwrite (&Progreso , sizeof(int), sizeof(Progreso), pFile);
    fclose (pFile);


    release = false;
        }
}

    else if (MostrarMuertes  && mouse_x > 214 && mouse_x < 381 && mouse_y > 332 && mouse_y < 350){
        blit(opc3, buffer, 0, 0, 0, 0, 600, 450);
         if(EnablePractice){
         while ( mouse_b & 1){
                release = true;
            }
            if(release)EnablePractice = false;
            release = false;
            }
            else if (EnablePractice == false){
                 while ( mouse_b & 1){
                release = true;
            }
            if(release)EnablePractice = true;
            release = false;
            }
        }

    else if (MostrarMuertes == false  && mouse_x > 214 && mouse_x < 381 && mouse_y > 332 && mouse_y < 350){
        blit(opc2TT, buffer, 0, 0, 0, 0, 600, 450);
         if(EnablePractice){
         while ( mouse_b & 1){
                release = true;
            }
            if(release)EnablePractice = false;
            release = false;
            }
            else if (EnablePractice == false){
                 while ( mouse_b & 1){
                release = true;
            }
            if(release)EnablePractice = true;
            release = false;
            }
    }

    else if(MostrarMuertes && EnablePractice == false && mouse_x > 14 && mouse_x < 88 && mouse_y > 405 && mouse_y < 427){
        blit(opc4, buffer, 0, 0, 0, 0, 600, 450);
        while (mouse_b & 1){release = true;}
        if(release){
                release = false;
                menu = false;
        }
    }

    else if(MostrarMuertes == false && EnablePractice == false && mouse_x > 14 && mouse_x < 88 && mouse_y > 405 && mouse_y < 427){
        blit(opc2TTT,buffer, 0, 0, 0, 0, 600, 450);
        while (mouse_b & 1){release = true;}
        if(release){
                release = false;
                menu = false;
        }
    }

    else if(MostrarMuertes == false && EnablePractice && mouse_x > 14 && mouse_x < 88 && mouse_y > 405 && mouse_y < 427){
        blit(opc3T, buffer, 0, 0, 0, 0, 600, 450);
        while (mouse_b & 1){release = true;}
        if(release){
                release = false;
                menu = false;
        }
    }

    else if(MostrarMuertes && EnablePractice && mouse_x > 14 && mouse_x < 88 && mouse_y > 405 && mouse_y < 427){
        blit(opc3TT, buffer, 0, 0, 0, 0, 600, 450);
        while (mouse_b & 1){release = true;}
        if(release){
                release = false;
                menu = false;
        }
    }

        else if (MostrarMuertes && EnablePractice) blit(opc3, buffer, 0, 0, 0, 0, 600, 450);
        else if(MostrarMuertes && EnablePractice == false) blit(opc, buffer, 0, 0, 0, 0, 600, 450);
        else if(MostrarMuertes == false && EnablePractice == false) blit(opc2, buffer, 0, 0, 0, 0, 600, 450);
        else if(MostrarMuertes == false && EnablePractice) blit(opc2TT, buffer, 0, 0, 0, 0, 600, 450);

    masked_blit(cursor, buffer,0,0, mouse_x, mouse_y, 13, 22);
        blit(buffer,screen, 0,0,0,0,600,450 );
    }
    destroy_bitmap(buffer);
    destroy_bitmap(opc);
    destroy_bitmap(opc1);
    destroy_bitmap(opc2);
    destroy_bitmap(opc3);
    destroy_bitmap(opc2T);
     destroy_bitmap(opc2TT);
      destroy_bitmap(opc2TTT);
       destroy_bitmap(opc2TTTT);
    destroy_bitmap(opc3T);

    return;
}

#endif // MENUOPC_H_INCLUDED
