#include "Cocodrilo.h"
#include "SDL/SDL_mixer.h"
Cocodrilo::Cocodrilo(Personaje*personaje)
{
    //ctor
    this->duracion_animacion=5;
     this->x=200;
    this->y=200;
     this->sprites.push_back(IMG_Load("Cocodrilo/croc01.png"));
    this->sprites.push_back(IMG_Load("Cocodrilo/croc02.png"));
    this->sprites.push_back(IMG_Load("Cocodrilo/croc03.png"));
    this->sprites.push_back(IMG_Load("Cocodrilo/croc04.png"));
    this->sprites.push_back(IMG_Load("Cocodrilo/croc05.png"));
    this->sprites.push_back(IMG_Load("Cocodrilo/croc06.png"));
    this->personaje=personaje;
}

Cocodrilo::~Cocodrilo()
{
    //dtor
}

void Cocodrilo::logica(Personaje *personaje)
{
      if(va_para_la_derecha)
        this->x++;
    else
        this->x--;

    if(x>400)

            va_para_la_derecha=false;
    if(x<50)

        va_para_la_derecha=true;

if(personaje->personaje_x+128>this->x && personaje->personaje_x<this->x+128
            && personaje->personaje_y+128>this->y && personaje->personaje_y<this->y+128){
             Mix_Music *music ;
            Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 4096 );
            music = Mix_LoadMUS( "beat.wav" );
            Mix_PlayMusic( music, -1 );
            this->colision=true;




}            }

