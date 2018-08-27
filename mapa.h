#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

#include <fstream>
using namespace std;


class Mapa{
private:
    int loadcounterX, loadcounterY;
    int mapSizeX, mapSizeY;
    int MapFile[779][15];
    int nivel;
    //Sonidos
    SAMPLE *BlackHole = load_wav("recursos/blackhole/BlackHole.wav");
    SAMPLE *Holdin = load_wav("recursos/holdin/Holdin.wav");
    SAMPLE *Mistakes = load_wav("recursos/mistakes/Mistakes.wav");
    SAMPLE *Saturn = load_wav("recursos/saturn/Saturn.wav");
    SAMPLE *Sonic = load_wav("recursos/sonicmasala/Sonic.wav");

    BITMAP *trampolin = load_bitmap("recursos/trampolin.bmp", NULL);
    BITMAP *bufferpinche = create_bitmap(40,40);
    BITMAP *bufferpinche2 = create_bitmap(40,40);
    BITMAP *buffercuadrado = create_bitmap(40,40);
    BITMAP *buffertrampolin = create_bitmap(40,40);
    BITMAP *buffergravity = create_bitmap(40,40);
    BITMAP *buffergravity2 = create_bitmap(40,40);
    BITMAP *bufferportal = create_bitmap(40,40);
    BITMAP *gravity = load_bitmap("recursos/gravity.bmp", NULL);
    BITMAP *gravity2 = load_bitmap("recursos/gravity2.bmp", NULL);

    //Sprites Black Hole
    BITMAP *pincheBH = load_bitmap("recursos/blackhole/pinche.bmp", NULL);
    BITMAP *pinche2BH = load_bitmap("recursos/blackhole/pinche2.bmp", NULL);
    BITMAP *cuadradoBH = load_bitmap("recursos/blackhole/cuadrado.bmp", NULL);
    BITMAP *fondoBH = load_bitmap("recursos/blackhole/BlackHole.bmp", NULL);

    //Sprites Holdin
    BITMAP *pincheHO = load_bitmap("recursos/holdin/pinche.bmp", NULL);
    BITMAP *pinche2HO = load_bitmap("recursos/holdin/pinche2.bmp", NULL);
    BITMAP *cuadradoHO = load_bitmap("recursos/holdin/cuadrado.bmp", NULL);
    BITMAP *fondoHO = load_bitmap("recursos/holdin/Holdin.bmp", NULL);

    //Sprites Mistakes
    BITMAP *pincheMI = load_bitmap("recursos/mistakes/pinche.bmp", NULL);
    BITMAP *pinche2MI = load_bitmap("recursos/mistakes/pinche2.bmp", NULL);
    BITMAP *cuadradoMI = load_bitmap("recursos/mistakes/cuadrado.bmp", NULL);
    BITMAP *fondoMI = load_bitmap("recursos/mistakes/Mistakes.bmp", NULL);

    //Sprites Saturn
    BITMAP *pincheSA = load_bitmap("recursos/saturn/pinche.bmp", NULL);
    BITMAP *pinche2SA = load_bitmap("recursos/saturn/pinche2.bmp", NULL);
    BITMAP *cuadradoSA = load_bitmap("recursos/saturn/cuadrado.bmp", NULL);
    BITMAP *fondoSA = load_bitmap("recursos/saturn/Saturn.bmp", NULL);

    //Sprites Sonic Masala
    BITMAP *pincheSO = load_bitmap("recursos/sonicmasala/pinche.bmp", NULL);
    BITMAP *pinche2SO = load_bitmap("recursos/sonicmasala/pinche2.bmp", NULL);
    BITMAP *cuadradoSO = load_bitmap("recursos/sonicmasala/cuadrado.bmp", NULL);
    BITMAP *fondoSO = load_bitmap("recursos/sonicmasala/Sonic.bmp", NULL);

    //Portal
    BITMAP *portal = load_bitmap("recursos/portal.bmp", NULL);

public:
    Mapa();
    ~Mapa();

    void Init();
    void Init2();
    void Init3();
    void Init4();
    void Init5();

    void destroyer(){
    clear_bitmap(buffercuadrado);
    clear_bitmap(buffergravity);
    clear_bitmap(buffergravity2);
    clear_bitmap(bufferpinche);
    clear_bitmap(bufferpinche2);
    clear_bitmap(bufferportal);
    clear_bitmap(trampolin);

    destroy_bitmap(fondoBH);
    destroy_bitmap(pinche2BH);
    destroy_bitmap(pincheBH);
    destroy_bitmap(cuadradoBH);
    destroy_bitmap(fondoSO);
    destroy_bitmap(pinche2SO);
    destroy_bitmap(pincheSO);
    destroy_bitmap(cuadradoSO);
    destroy_bitmap(fondoMI);
    destroy_bitmap(pinche2MI);
    destroy_bitmap(pincheMI);
    destroy_bitmap(cuadradoMI);
    destroy_bitmap(fondoSA);
    destroy_bitmap(pinche2SA);
    destroy_bitmap(pincheSA);
    destroy_bitmap(cuadradoSA);
    destroy_bitmap(fondoHO);
    destroy_bitmap(pinche2HO);
    destroy_bitmap(pincheHO);
    destroy_bitmap(cuadradoHO);
    destroy_bitmap(trampolin);
    destroy_bitmap(portal);
    destroy_bitmap(gravity);
    destroy_bitmap(gravity2);

    destroy_sample(BlackHole);
    destroy_sample(Sonic);
    destroy_sample(Mistakes);
    destroy_sample(Saturn);
    destroy_sample(Holdin);
    }

    void Update();

   void Draw(BITMAP *buffer, int avance);


    void LoadMap(const char *filename);
    SAMPLE* GetBH(){return BlackHole;}
    SAMPLE* GetSO(){return Sonic;}
    SAMPLE* GetMI(){return Mistakes;}
    SAMPLE* GetSA(){return Saturn;}
    SAMPLE* GetHO(){return Holdin;}
    int GetNivel(){return nivel;}
    void SetNivel(int _nivel){nivel=_nivel;}
    void progreso();
};

Mapa::Mapa(){}
Mapa::~Mapa(){}

void Mapa::Init(){
    loadcounterX = loadcounterY = 0;
    Mapa::LoadMap("map1.txt");
    nivel=1;
}
void Mapa::Init2(){
    loadcounterX = loadcounterY = 0;
    Mapa::LoadMap("map2.txt");
    nivel=2;
}
void Mapa::Init3(){
    loadcounterX = loadcounterY = 0;
    Mapa::LoadMap("map3.txt");
    nivel=3;
}
void Mapa::Init4(){
    loadcounterX = loadcounterY = 0;
    Mapa::LoadMap("map4.txt");
    nivel=4;
}
void Mapa::Init5(){
    loadcounterX = loadcounterY = 0;
    Mapa::LoadMap("map5.txt");
    nivel = 5;
}

void Mapa::Draw(BITMAP *buffer, int avance){


    if(nivel==1){

        blit(fondoBH, buffer, 0+(avance/4), 972, 0, 0, 600, 450);
        draw_sprite(buffer, fondoBH, 0-(avance/4), 0);
        if(MostrarMuertes) mostrarMuertes(buffer);
        for(int i=0; i <mapSizeX; i++){
            for(int j=0; j < mapSizeY; j++){
                if(MapFile[i][j]==1){
                    blit(cuadradoBH, buffercuadrado,0,0,0,0,40,40);
                    draw_sprite(buffer,buffercuadrado, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==2){
                    blit(pincheBH, bufferpinche,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==3){
                    blit(trampolin, buffertrampolin,0,0,0,0,40,40);
                    draw_sprite(buffer,buffertrampolin, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==4){
                    blit(gravity, buffergravity,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==5){
                    blit(gravity2, buffergravity2,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity2, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==6){
                    blit(pinche2BH, bufferpinche2,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche2, i*blocksize - avance, j*blocksize);
                }
        }
    }
    }

    if(nivel==2){

        blit(fondoSO, buffer, 0+(avance/4), 972, 0, 0, 600, 450);
        draw_sprite(buffer, fondoSO, 0-(avance/4), 0);
        if(MostrarMuertes) mostrarMuertes(buffer);
        for(int i=0; i <mapSizeX; i++){
            for(int j=0; j < mapSizeY; j++){
                if(MapFile[i][j]==1){
                    blit(cuadradoSO, buffercuadrado,0,0,0,0,40,40);
                    draw_sprite(buffer,buffercuadrado, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==2){
                    blit(pincheSO, bufferpinche,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==3){
                    blit(trampolin, buffertrampolin,0,0,0,0,40,40);
                    draw_sprite(buffer,buffertrampolin, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==4){
                    blit(gravity, buffergravity,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==5){
                    blit(gravity2, buffergravity2,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity2, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==6){
                    blit(pinche2SO, bufferpinche2,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche2, i*blocksize - avance, j*blocksize);
                }
            }
        }
    }

   if(nivel==3){

        blit(fondoMI, buffer, 0+(avance/4), 972, 0, 0, 600, 450);
        draw_sprite(buffer, fondoMI, 0-(avance/4), 0);
        if(MostrarMuertes) mostrarMuertes(buffer);
        for(int i=0; i <mapSizeX; i++){
            for(int j=0; j < mapSizeY; j++){
                if(MapFile[i][j]==1){
                    blit(cuadradoMI, buffercuadrado,0,0,0,0,40,40);
                    draw_sprite(buffer,buffercuadrado, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==2){
                    blit(pincheMI, bufferpinche,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==3){
                    blit(trampolin, buffertrampolin,0,0,0,0,40,40);
                    draw_sprite(buffer,buffertrampolin, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==4){
                    blit(gravity, buffergravity,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==5){
                    blit(gravity2, buffergravity2,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity2, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==6){
                    blit(pinche2MI, bufferpinche2,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche2, i*blocksize - avance, j*blocksize);
                }
            }
        }
    }

    if(nivel==4){

        blit(fondoSA, buffer, 0+(avance/4), 972, 0, 0, 600, 450);
        draw_sprite(buffer, fondoSA, 0-(avance/4), 0);
        if(MostrarMuertes) mostrarMuertes(buffer);
        for(int i=0; i <mapSizeX; i++){
            for(int j=0; j < mapSizeY; j++){
                if(MapFile[i][j]==1){
                    blit(cuadradoSA, buffercuadrado,0,0,0,0,40,40);
                    draw_sprite(buffer,buffercuadrado, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==2){
                    blit(pincheSA, bufferpinche,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==3){
                    blit(trampolin, buffertrampolin,0,0,0,0,40,40);
                    draw_sprite(buffer,buffertrampolin, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==4){
                    blit(gravity, buffergravity,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==5){
                    blit(gravity2, buffergravity2,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity2, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==6){
                    blit(pinche2SA, bufferpinche2,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche2, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==8 || (MapFile[i][j])== 9){
                    blit(portal, bufferportal,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferportal, i*blocksize - avance, j*blocksize);
                }
        }
    }
    }

    if(nivel==5){

        blit(fondoHO, buffer, 0+(avance/4), 972, 0, 0, 600, 450);
        draw_sprite(buffer, fondoHO, 0-(avance/4), 0);
        if(MostrarMuertes) mostrarMuertes(buffer);
        for(int i=0; i <mapSizeX; i++){
            for(int j=0; j < mapSizeY; j++){
                if(MapFile[i][j]==1){
                    blit(cuadradoHO, buffercuadrado,0,0,0,0,40,40);
                    draw_sprite(buffer,buffercuadrado, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==2){
                    blit(pincheHO, bufferpinche,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==3){
                    blit(trampolin, buffertrampolin,0,0,0,0,40,40);
                    draw_sprite(buffer,buffertrampolin, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==4){
                    blit(gravity, buffergravity,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==5){
                    blit(gravity2, buffergravity2,0,0,0,0,40,40);
                    draw_sprite(buffer,buffergravity2, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==6){
                    blit(pinche2HO, bufferpinche2,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferpinche2, i*blocksize - avance, j*blocksize);
                }
                else if((MapFile[i][j])==8 || (MapFile[i][j])== 9){
                    blit(portal, bufferportal,0,0,0,0,40,40);
                    draw_sprite(buffer,bufferportal, i*blocksize - avance, j*blocksize);
                }
        }
    }
    }
    }


void Mapa::LoadMap(const char*filename){
    ifstream openfile (filename);
    if (openfile.is_open()){
        openfile >> mapSizeX >> mapSizeY;
        while(!openfile.eof()){
            openfile >> MapFile[loadcounterX][loadcounterY];
            loadcounterX++;

            if(loadcounterX >= mapSizeX){
                loadcounterX=0;
                loadcounterY++;
            }
        }
        loadcounterX = loadcounterY = 0;
    }//File is opened
    else{
        allegro_message("map file error");
    }
}


#endif // MAPA_H_INCLUDED
