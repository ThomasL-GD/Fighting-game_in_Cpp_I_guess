#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
    private:
        int _hpMax;
        int _hp;
        int _baseAtk;
        int _currentAtk;
        int _coeff;
        std::string _name;

    public:

        int getHp();
        int getHpMax();
        int getBaseAtk();
        int getCurrentAtk();
        int getCoeff();
        std::string getName();

        void setHp(int vie);
        void setCurrentAtk(int valor);
        void setCoeff(int coeff);
        void setName(std::string name);

        Player();
        Player(int maxHp, int hp, int baseAtk, int currentAtk, int coeff, std::string name);
        
};

#endif