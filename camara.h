#ifndef CAMARA_H_INCLUDED
#define CAMARA_H_INCLUDED

class camara{
    private:
        int camaraX, camaraY;
        int avancecamara;


    public:
        camara();
        ~camara();

        void Init();
        void Update(int x, int y, int hdir);
        void Draw(BITMAP *buffer, Personaje &PJ);

        void SetPosition(int x, int y, int hdir);
        int GetAvancecamara(){return avancecamara;}
        void SetAvancecamara(int num){avancecamara=num;}
};

camara::camara(){}
camara::~camara(){}



void camara::Init(){
    camaraX = 0;
    camaraY = 0;
    avancecamara=0;
}

void camara::Update(int x, int y, int hdir){
    camara::SetPosition(x, y, hdir);
}

void camara::Draw(BITMAP *buffer, Personaje &PJ){


    blit(buffer, screen, 0, 0, 0, 0, ScreenAncho, ScreenAlto);

}

void camara::SetPosition(int x, int y, int hdir){

    if(x+15>=ScreenAncho/2){
    avancecamara=x+15-ScreenAncho/2;
    }
}




#endif // CAMARA_H_INCLUDED
