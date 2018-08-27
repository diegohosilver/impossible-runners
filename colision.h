#ifndef COLISION_H_INCLUDED
#define COLISION_H_INCLUDED

#include <fstream>
using namespace std;

bool checkearProgreso(int Progreso, int NNIV){
int ProgresoAnt;

FILE *pFile;
switch (NNIV){
case 1:
      pFile = fopen ("Progreso1.DAT", "rb");
    break;
    case 2:
      pFile = fopen ("Progreso2.DAT", "rb");
    break;
    case 3:
      pFile = fopen ("Progreso3.DAT", "rb");
    break;
    case 4:
      pFile = fopen ("Progreso4.DAT", "rb");
    break;
    case 5:
      pFile = fopen ("Progreso5.DAT", "rb");
    break;
}
  fread (&ProgresoAnt , sizeof(int), 1, pFile);
  fclose (pFile);

  if ((int)ProgresoAnt < (int)Progreso) return true;
  else return false;
}

void guardarProgreso(int AVANCE, int NNIV){
    FILE * pFile;
    int Progreso;
    Progreso = AVANCE * 100 / 30000;
    if(checkearProgreso(Progreso, NNIV)){
    switch(NNIV){
    case 1:
    pFile = fopen ("Progreso1.DAT", "wb");
    break;
    case 2:
    pFile = fopen ("Progreso2.DAT", "wb");
    break;
    case 3:
    pFile = fopen ("Progreso3.DAT", "wb");
    break;
    case 4:
    pFile = fopen ("Progreso4.DAT", "wb");
    break;
    case 5:
    pFile = fopen ("Progreso5.DAT", "wb");
    break;
    }
    fwrite (&Progreso , sizeof(int), 1, pFile);
    fclose (pFile);
}
}

class collision{
private:
    int loadcounterX, loadcounterY;
    int mapsizeX, mapsizeY;
    int colMapFile[779][15];
    int c = 0;
    SAMPLE *Hit = load_wav("recursos/Hit.wav");
    SAMPLE *Trampolin = load_wav("recursos/Trampolin.wav");

public:
    collision();
    ~collision();

    void Init();
    void Init2();
    void Init3();
    void Init4();
    void Init5();

    void Update(Personaje &PJ, camara &cam, SAMPLE *MusicaNivel, int Nivel);
    void Draw(BITMAP *buffer);

    void loadcollisionmap(const char*filename);
    void platformcollision(BITMAP *buffer, Personaje &PJ);

    void InitManualPlatform();
};

collision::collision(){}
collision::~collision(){}

void collision::Init(){
    loadcounterX = loadcounterY = 0;
    collision::loadcollisionmap("map1.txt");
}
void collision::Init2(){
    loadcounterX = loadcounterY = 0;
    collision::loadcollisionmap("map2.txt");
}
void collision::Init3(){
    loadcounterX = loadcounterY = 0;
    collision::loadcollisionmap("map3.txt");
}
void collision::Init4(){
    loadcounterX = loadcounterY = 0;
    collision::loadcollisionmap("map4.txt");
}
void collision::Init5(){
    loadcounterX = loadcounterY = 0;
    collision::loadcollisionmap("map5.txt");
}

void collision::Update(Personaje &PJ, camara &cam, SAMPLE *MusicaNivel, int Nivel){
 for(int i=0; i < 779; i++){
        for(int j=0; j < 15; j++){


            if(colMapFile[i][j] == 9){
                     if(PJ.GetX2() > i*blocksize + 10 && PJ.GetY2() > j*blocksize + 10 || PJ.GetX2() > i*blocksize + 10 && PJ.GetY() > j*blocksize - 10){
                    PJ.EnableJet();
                    if (Nivel == 5) PJ.EnablePlane();
                     }
            }

            if(colMapFile[i][j] == 8){
                    if(PJ.GetX2() > i*blocksize + 10 && PJ.GetY2() > j*blocksize + 10 || PJ.GetX2() > i*blocksize + 10 && PJ.GetY() > j*blocksize - 10){
                    PJ.DisableJet();
                    if (Nivel == 5) PJ.DisablePlane();
                     }
            }

                //Bloque comun
            if(colMapFile[i][j] == 1 && PJ.GetGravedad()){
                if(PJ.GetX() > i*blocksize +  blocksize || PJ.GetY() > j*blocksize + blocksize  || PJ.GetX2() < i*blocksize || PJ.GetY2() < j*blocksize){
                    //No collision
                    PJ.SetPlatform(false);
                }
                else{

                    if(PJ.GetY() - PJ.GetVely() <= j*blocksize){
                        PJ.SetY(j*blocksize - PJ.GetAlto());
                        PJ.SetY2(PJ.GetY() + PJ.GetAlto());
                        PJ.SetPlatform(true);
                        PJ.SetJump(true);
                        PJ.SetVely(0);

                    }
                    if(PJ.GetY2() > j*blocksize + 10 && PJ.GetX2() > i*blocksize + 10){
                        play_sample(Hit,100,150,1000,0);
                        stop_sample(MusicaNivel);
                        guardarProgreso(PJ.GetX(), Nivel);
                        PJ.Respawn();
                        if (Nivel == 4 || Nivel == 5){
                                PJ.DisableJet();
                                PJ.DisablePlane();
                        }
                        cam.SetAvancecamara(0);
//                        CalcMaxXxNivel(PJ.GetX())
                        play_sample(MusicaNivel,100,150,1000,0);
                        }
                    }
                }

                if(colMapFile[i][j] == 1 && !PJ.GetGravedad()){
                if(PJ.GetX() > i*blocksize +  blocksize || PJ.GetY() > j*blocksize + blocksize  || PJ.GetX2() < i*blocksize || PJ.GetY2() < j*blocksize){
                    //No collision
                    PJ.SetPlatform(false);
                }
                else{

                    if(PJ.GetY() - PJ.GetVely() <= j*blocksize + blocksize){
                        PJ.SetY(j*blocksize + PJ.GetAlto());
                        PJ.SetY2(PJ.GetY() + PJ.GetAlto());
                        PJ.SetPlatform(true);
                        PJ.SetJump(true);
                        PJ.SetVely(0);

                    }

                    }
                }


                    //Pinche
                if(colMapFile[i][j] == 2){
                    if(PJ.GetX() > i*blocksize +  blocksize || PJ.GetY() > j*blocksize + blocksize  || PJ.GetX2() < i*blocksize || PJ.GetY2() < j*blocksize){
                    //No collision
                    //PJ.SetPlatform(false);
                }
               else if(PJ.GetX2() > i*blocksize + 10 && PJ.GetY2() > j*blocksize + 10 && PJ.GetGravedad() && c == 0){
                        play_sample(Hit,100,150,1000,0);
                        stop_sample(MusicaNivel);
                        guardarProgreso(PJ.GetX(), Nivel);
                        PJ.Respawn();
                        if (Nivel == 4 || Nivel == 5){
                                PJ.DisableJet();
                                PJ.DisablePlane();
                        }
                        cam.SetAvancecamara(0);
                        play_sample(MusicaNivel,100,150,1000,0);
                        c++;
                }
            }
            if(PJ.GetX()>300) c = 0;

                //Saltarin XDDDDDDD
            if(colMapFile[i][j] == 3){
                    if(PJ.GetX() > i*blocksize +  blocksize || PJ.GetY() > j*blocksize + blocksize  || PJ.GetX2() < i*blocksize || PJ.GetY2() < j*blocksize){
                    //No collision
                    PJ.SetPlatform(false);
                }
                else if(PJ.GetX2() > i*blocksize && PJ.GetY2() > j*blocksize + 17 ){
                        play_sample(Trampolin,100,150,1000,0);
                        PJ.SetVely(-40);
                        PJ.SetJump(false);

                }
        }


                    //Interruptor gravedad
            if(colMapFile[i][j] == 4){
                if(PJ.GetX() > i*blocksize +  blocksize || PJ.GetY() > j*blocksize + blocksize  || PJ.GetX2() < i*blocksize || PJ.GetY2() < j*blocksize){
                //No collision
                PJ.SetPlatform(false);
            }
            else if(PJ.GetGravedad() ){
                play_sample(Trampolin,100,150,1000,0);
                PJ.SetJump(false);
                PJ.SetGravedad(false);
            }
            else if(!PJ.GetGravedad() ){
                PJ.SetJump(false);
                PJ.SetGravedad(true);
            }
        }

                    if(colMapFile[i][j] == 5){
                if(PJ.GetX() > i*blocksize +  blocksize || PJ.GetY() > j*blocksize + blocksize  || PJ.GetX2() < i*blocksize || PJ.GetY2() < j*blocksize){
                //No collision
                PJ.SetPlatform(false);
            }
            else if(!PJ.GetGravedad() ){
                play_sample(Trampolin,100,150,1000,0);
                PJ.SetJump(false);
                PJ.SetGravedad(true);


        }
}              //////pinche invertido
            if(colMapFile[i][j] == 6){
                if(PJ.GetX() > i*blocksize +  blocksize || PJ.GetY() > j*blocksize + blocksize  || PJ.GetX2() < i*blocksize || PJ.GetY2() < j*blocksize){
                //No collision
                //PJ.SetPlatform(false);
            }
            else if(PJ.GetX2() > i*blocksize + 10 && PJ.GetY() > j*blocksize - 10){
                        play_sample(Hit,100,150,1000,0);
                        stop_sample(MusicaNivel);
                        guardarProgreso(PJ.GetX(), Nivel);
                        PJ.Respawn();
                        if (Nivel == 4 || Nivel == 5){
                                PJ.DisableJet();
                                PJ.DisablePlane();
                        }
                        cam.SetAvancecamara(0);
                        play_sample(MusicaNivel,100,150,1000,0);
                }

            }
}
}
}

void collision::Draw(BITMAP *buffer){
    for(int i=0; i <120; i++){
        for(int j=0; j < 15; j++){
            if(colMapFile[i][j]==0){
                rectfill(buffer, i*blocksize, j*blocksize, i*blocksize + blocksize, j*blocksize + blocksize, makecol(0,255,255));
            }
            if(colMapFile[i][j]==3){
                rectfill(buffer, i*blocksize, j*blocksize, i*blocksize + blocksize, j*blocksize + blocksize, makecol(255,255,255));
            }
        }
    }
}


void collision::loadcollisionmap(const char*filename){
    ifstream openfile(filename);
    if (openfile.is_open()){
        openfile >> mapsizeX >> mapsizeY;
        while(!openfile.eof()){
            openfile >> colMapFile[loadcounterX][loadcounterY];
            loadcounterX++;
            if(loadcounterX >= mapsizeX){
                loadcounterX=0;
                loadcounterY++;
            }
        }
        loadcounterX = loadcounterY = 0;
    }
    else{
        allegro_message ("col map file error");
   }
}

#endif // COLISION_H_INCLUDED
