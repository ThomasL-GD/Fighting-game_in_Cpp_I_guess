#ifndef ENNEMY_H
#define ENNEMY_H

#include <string>

class Ennemy{
    private:
        
        int _atkEnnemy;
        int _lifeEnnemy;
        int _chargeEnnemy;

        std::string _nomEnnemy;

    public:
       
       int getAtkEnnemy();
       void setAtkEnnemy(int atkEnnemy);

       int getLifeEnnemy();
       void setLifeEnnemy(int lifeEnnemy);

       int getChargeEnnemy();
       void setChargeEnnemy(int chargeEnnemy);

       std::string getNomEnnemy();
       void setNomEnnemy(std::string nomEnnemy);

       void degats();
       void action();

       bool stillAlive();
       bool takeDamage(int dmg);

       

    Ennemy(int atkEnnemy, int lifeEnnemy, int chargeEnnemy,std::string nomEnnemy);

};


#endif