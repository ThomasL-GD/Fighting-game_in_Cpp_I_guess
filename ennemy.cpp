#ifndef ENNEMY_CPP
#define ENNEMY_CPP

#include "Ennemy.h"

    int Ennemy:: getAtkEnnemy(){
        return _atkEnnemy;
    }

    void Ennemy:: setAtkEnnemy(int atkEnnemy){
        _atkEnnemy=atkEnnemy;
    }

    int Ennemy:: getLifeEnnemy(){
        return _lifeEnnemy;
    }

    void Ennemy:: setLifeEnnemy(int lifeEnnemy){
        _lifeEnnemy=lifeEnnemy;
    }

    int Ennemy:: getChargeEnnemy(){
        return _chargeEnnemy;
    }

    void Ennemy:: setChargeEnnemy(int chargeEnnemy){
        _chargeEnnemy=chargeEnnemy;
    }

    std::string Ennemy :: getNomEnnemy(){
       return _nomEnnemy;
    }

    void Ennemy::setNomEnnemy(std::string nomEnnemy){
        _nomEnnemy= nomEnnemy; 
    }

    Ennemy::Ennemy(int atkEnnemy, int lifeEnnemy, int chargeEnnemy, std::string nomEnnemy): _atkEnnemy(atkEnnemy), _chargeEnnemy(chargeEnnemy),_lifeEnnemy(lifeEnnemy),_nomEnnemy(nomEnnemy){}


#endif



