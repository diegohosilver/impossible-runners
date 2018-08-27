#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

#include <cstdio>

#define ScreenAlto 450
#define ScreenAncho 600
#define blocksize 40

int ContadorMuertes = 0;
int ContadorMuertesTotal = 0;
int ContadorBH = 0;
int ContadorSO = 0;
int ContadorMI = 0;
int ContadorSA = 0;
int ContadorHO = 0;



void guardarMuertesBH(int Muertes){
FILE *p;
p = fopen("MuertesBH.DAT", "wb");
fwrite(&Muertes, sizeof(int), 1, p);
fclose(p);
}

int getMuertesBH(){
int Muertes;
FILE *p;
p = fopen("MuertesBH.DAT", "rb");
fread(&Muertes, sizeof(int), 1, p);
fclose(p);
return Muertes;
}

void guardarMuertesSO(int Muertes){
FILE *p;
p = fopen("MuertesSO.DAT", "wb");
fwrite(&Muertes, sizeof(int), 1, p);
fclose(p);
}

int getMuertesSO(){
int Muertes;
FILE *p;
p = fopen("MuertesSO.DAT", "rb");
fread(&Muertes, sizeof(int), 1, p);
fclose(p);
return Muertes;
}

void guardarMuertesMI(int Muertes){
FILE *p;
p = fopen("MuertesMI.DAT", "wb");
fwrite(&Muertes, sizeof(int), 1, p);
fclose(p);
}

int getMuertesMI(){
int Muertes;
FILE *p;
p = fopen("MuertesMI.DAT", "rb");
fread(&Muertes, sizeof(int), 1, p);
fclose(p);
return Muertes;
}

void guardarMuertesSA(int Muertes){
FILE *p;
p = fopen("MuertesSA.DAT", "wb");
fwrite(&Muertes, sizeof(int), 1, p);
fclose(p);
}

int getMuertesSA(){
int Muertes;
FILE *p;
p = fopen("MuertesSA.DAT", "rb");
fread(&Muertes, sizeof(int), 1, p);
fclose(p);
return Muertes;
}

void guardarMuertesHO(int Muertes){
FILE *p;
p = fopen("MuertesHO.DAT", "wb");
fwrite(&Muertes, sizeof(int), 1, p);
fclose(p);
}

int getMuertesHO(){
int Muertes;
FILE *p;
p = fopen("MuertesHO.DAT", "rb");
fread(&Muertes, sizeof(int), 1, p);
fclose(p);
return Muertes;
}

void guardarMuertesTotal(int Muertes){
FILE *p;
p = fopen("MuertesTOT.DAT", "wb");
fwrite(&Muertes, sizeof(int), 1, p);
fclose(p);
}

int getMuertesTotal(){
int Muertes;
FILE *p;
p = fopen("MuertesTOT.DAT", "rb");
fread(&Muertes, sizeof(int), 1, p);
fclose(p);
return Muertes;
}

void calcularMuertesTotal(){
ContadorMuertesTotal = 0;
ContadorMuertesTotal += getMuertesBH();
ContadorMuertesTotal += getMuertesSO();
ContadorMuertesTotal += getMuertesMI();
ContadorMuertesTotal += getMuertesSA();
ContadorMuertesTotal += getMuertesHO();
guardarMuertesTotal(ContadorMuertesTotal);
}

bool MostrarMuertes = true;

bool EnablePractice = false;

void mostrarMuertes(BITMAP *buffer){
textprintf_ex(buffer, font, 20, 50, makecol(255, 255, 255),-1, "MUERTES: %d", ContadorMuertes);
}

#endif // GLOBAL_H_INCLUDED

/**
▒▒▒░░░░░░░░░░▄▐░░░░
▒░░░░░░▄▄▄░░▄██▄░░░
░░░░░░▐▀█▀▌░░░░▀█▄░
░░░░░░▐█▄█▌░░░░░░▀█▄
░░░░░░░▀▄▀░░░▄▄▄▄▄▀▀
░░░░░▄▄▄██▀▀▀▀░░░░░
░░░░█▀▄▄▄█░▀▀░░░░░░
░░░░▌░▄▄▄▐▌▀▀▀░░░░░
░▄░▐░░░▄▄░█░▀▀░░░░░
░▀█▌░░░▄░▀█▀░▀░░░░░
░░░░░░░░▄▄▐▌▄▄░░░░░
░░░░░░░░▀███▀█░▄░░░
░░░░░░░▐▌▀▄▀▄▀▐▄░░░
░░░░░░░▐▀░░░░░░▐▌░░
░░░░░░░█░░░░░░░░█░░
░░░░░░▐▌░░░░░░░░░█░
**/
