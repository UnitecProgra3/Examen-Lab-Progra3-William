#ifndef FANTASMITA_H
#define FANTASMITA_H
#include "Enemigo.h"

class Fantasmita  : public Enemigo
{
    public:
        Fantasmita(Personaje * personaje);
        void logica(Personaje*personaje);
        virtual ~Fantasmita();
    protected:
    private:
};

#endif // FANTASMITA_H
