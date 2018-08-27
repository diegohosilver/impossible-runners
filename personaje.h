#ifndef PERSONAJE_H_INCLUDED
#define PERSONAJE_H_INCLUDED


class Base{
    protected:
     void Init();
     void Update();
     void Draw(BITMAP *buffer, int avancecamara);
};

class Colisionable: public Base{
    protected:

        int x, y;
        int x2, y2;
        int ancho, alto;

    public:

        int GetX(){return x;}
        int GetY(){return y;}
        int GetX2(){return x2;}
        int GetY2(){return y2;}
        int GetAncho(){return ancho;}
        int GetAlto(){return alto;}

        void SetX(int asd){x=asd;}
        void SetY(int asd){y=asd;}
        void SetX2(int asd){x2=asd;}
        void SetY2(int asd){y2=asd;}
        void SetAncho(int asd){ancho=asd;}
        void SetAlto(int asd){alto=asd;}
};

class Fisico: public Colisionable{
    protected:

        int velx, vely;
        int hDir, vDir;
        float speed, jumpspeed, invjumpspeed;
        bool jump, platform, djump;
        float gravity;
        int vida;
        bool vive;
        bool der;
        bool gravedad;
        SAMPLE *Jump = load_wav("recursos/Jump.wav");

    public:

        int GetVelx(){return velx;}
        int GetVely(){return vely;}
        int GetSpeed(){return speed;}
        float GetJumpSpeed(){return jumpspeed;}
        float GetInvJumpSpeed(){return invjumpspeed;}
        int GethDir(){return hDir;}
        int GetvDir(){return vDir;}
        bool GetJump(){return jump;}
        bool GetPlatform(){return platform;}
        int GetGravity(){return gravity;}
        int GetVida(){return vida;}
        int GetVive(){return vive;}
        bool GetDer(){return der;}
        bool GetGravedad(){return gravedad;}
        bool GetDJump(){return djump;}

        void SetVida(int asd){vida=asd;}
        void SetPlatform(bool asd){platform=asd;}
        void SetJump(bool asd){jump=asd;}
        void SetVelx(int asd){velx=asd;}
        void SetVely(int asd){vely=asd;}
        void SetGravedad(bool asd){gravedad=asd;}
        void SetDJump(bool asd){djump=asd;}

};


class Personaje: public Fisico{
    private:

        bool der;
        int djumpcharge;
        BITMAP *pj;
        BITMAP *cuadrado;
        BITMAP *bPlane;
        BITMAP *bJet;
        BITMAP *bufferPlane;
        BITMAP *bufferJet;
        int maxX;
        int release = 0;
        bool Jet;
        bool Plane;
        bool Move;
        bool dJet;
        bool dPlane;

    public:
        Personaje();
        ~Personaje();

        void Init();
        void Update(int);
        void Draw(BITMAP *buffer, int avancecamara);
        void SetPosition();
        void controls();

        void SetXplus(int asd){x+=asd;}
        void SetYplus(int asd){y+=asd;}
        void SetXminus(int asd){x-=asd;}
        void SetYminus(int asd){y-=asd;}
        void SetPJ(int);
        void EnableJet(){Jet = true;}
        void DisableJet(){Jet = false;}
        void EnablePlane(){Plane = true;}
        void DisablePlane(){Plane = false;}
        void EnableMove(){Move = true;}
        void DisableMove(){Move = false;}

        void CalcMaxX(int nivel){};

        void Respawn();
        int GetJetPackCant(){return djumpcharge;}
};

Personaje::Personaje(){}
Personaje::~Personaje(){}



/*void Personaje::CalcMaxX(int nivel){
    if(x>maxX){
        maxX=x;
    }
}*/

void Personaje::SetPJ(int OPC){
if (OPC==1){
    cuadrado = load_bitmap("PJ/a.bmp", NULL);
}
else if(OPC== 2){
    cuadrado = load_bitmap("PJ/b.bmp", NULL);
}
else if (OPC == 3){
    cuadrado = load_bitmap("PJ/c.bmp", NULL);
}
else if(OPC == 4){
    cuadrado = load_bitmap("PJ/d.bmp", NULL);
}
else if(OPC == 5){
    cuadrado = load_bitmap("PJ/e.bmp", NULL);
}
else if(OPC == 6){
    cuadrado = load_bitmap("PJ/f.bmp", NULL);
}
else if(OPC == 7){
    cuadrado = load_bitmap("PJ/g.bmp", NULL);
}
else if(OPC == 8){
    cuadrado = load_bitmap("PJ/h.bmp", NULL);
}
else if(OPC == 9){
    cuadrado = load_bitmap("PJ/i.bmp", NULL);
}
else if(OPC == 10){
    cuadrado = load_bitmap("PJ/j.bmp", NULL);
}
else if(OPC == 11){
    cuadrado = load_bitmap("PJ/k.bmp", NULL);
}
else if(OPC == 12){
    cuadrado = load_bitmap("PJ/l.bmp", NULL);
}
else if(OPC == 13){
    cuadrado = load_bitmap("PJ/m.bmp", NULL);
}
else if(OPC == 14){
    cuadrado = load_bitmap("PJ/n.bmp", NULL);
}
else if(OPC == 15){
    cuadrado = load_bitmap("PJ/o.bmp", NULL);
}
}


void Personaje::Respawn(){
x=100;
y=360;
gravedad=true;
djumpcharge=300000;
ContadorMuertes += 1;
}


void Personaje::Init(){
    pj= create_bitmap(39,39);
    bufferJet = create_bitmap(39,39);
    bufferPlane =create_bitmap(39,39);

    bJet = load_bitmap("recursos/Jetpack.bmp", NULL);
    bPlane = load_bitmap("recursos/Plane.bmp", NULL);

    x=100;
    y=360;
    velx=0;
    vely=0;
    speed=3.5;
    hDir=1;
    vDir=2;
    platform=false;
    jump=false;
    gravity=1;
    jumpspeed=-26;
    ancho = 39;
    alto = 39;
    der = true;
    vive=true;
    gravedad=true;
    djumpcharge=300;
    djump=false;
    dJet=false;
    dPlane=false;
}

void Personaje::controls(){

    if(key[KEY_UP] && jump && Move){
        vely = jumpspeed;

        platform=false;
        jump=false;
        vDir=1;
        djump=true;
        play_sample(Jump,100,150,1000,0);
    }
    else if(key[KEY_A] && djumpcharge>0 && Jet){
        dJet=true;
        vely = -16;
        vDir=1;
        if(djumpcharge>0){
            djumpcharge--;
        }
    }
    else if(key[KEY_S] && Plane){
        dPlane=true;
        vely = 3;
        vDir=1;
    }
    else{
    dJet = false;
    dPlane = false;
    }
}

void Personaje::SetPosition(){

if(gravedad){

    if(vely > 0){
        vDir=2;
    }
    if(!platform){
        vely+=gravity;
    }
    else{
        vely=0;

    }

    velx=speed;
    x+=velx;
    y+=vely/3;
    x2= x+ancho;
    y2= y+alto;
}
else{
    if(vely > 0){
        vDir=2;
    }
    if(!platform){
        vely+=gravity;
    }
    else{
        vely=0;

    }

    velx=speed;
    x+=velx;
    y-=vely/3;
    x2= x+ancho;
    y2= y+alto;



}
}



void Personaje::Update(int niv){
    Personaje::controls();
    Personaje::SetPosition();
    //CalcMaxXxNivel(x, niv);
}

void Personaje::Draw(BITMAP *buffer, int avancecamara){
    //parado
    blit(cuadrado, pj, 0, 0, 0, 0, 40, 40);
    draw_sprite(buffer, pj, x-avancecamara, y);

    if(dPlane){
        blit(bPlane, bufferPlane, 0, 0, 0, 0, 40, 40);
        draw_sprite(buffer, bufferPlane, x-avancecamara, y+25);
    }
    if(dJet){
        blit(bJet, bufferJet, 0, 0, 0, 0, 40, 40);
        draw_sprite(buffer, bufferJet, x-avancecamara-25, y+10);

    }
}





#endif // PERSONAJE_H_INCLUDED
