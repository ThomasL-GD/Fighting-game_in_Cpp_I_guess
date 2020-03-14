#ifndef PLAYER_CPP
#define PLAYER_CPP
#include "Player.h"

//   GETTERs
int Player::getHp(){
    return _hp;
}

int Player::getHpMax(){
    return _hpMax;
}

int Player::getBaseAtk(){
    return _baseAtk;
}

int Player::getCurrentAtk(){
    return _currentAtk;
}

int Player::getCoeff(){
    return _coeff;
}

std::string Player::getName(){
    return _name;
}


//   SETTERs
void Player::setHp(int vie){
    _hp = vie;
}

void Player::setCurrentAtk(int atk){
    _currentAtk = atk;
}

void Player::setCoeff(int coeff){
    _coeff = coeff;
}

void Player::setName(std::string name){
    _name = name;
}


//   CONSTUCTORs
Player::Player() : _hpMax(0), _hp(0), _baseAtk(0), _currentAtk(0), _coeff(0), _name("PQreuil") {}    //construteur vide
Player::Player(int maxHp, int hp, int baseAtk, int currentAtk, int coeff, std::string name) : _hpMax(maxHp), _hp(hp), _baseAtk(baseAtk), _currentAtk(currentAtk), _coeff(coeff), _name(name) {}    //constructeur plein


//In gme functions
void Player::powerUp(){
    _currentAtk = _currentAtk*_coeff;
}

void Player::resetAtk(){
    _currentAtk = _baseAtk;
}

bool Player::takeDamage(int dmg){
    _hp -= dmg;
    bool alive = aliveTest();
    return alive;
}

int Player::attack(){
    int dmg = _currentAtk;
    resetAtk();
    return dmg;
}

void Player::regen(){
    _hp = _hpMax;
}

bool Player::aliveTest(){
    bool alive = 1;
    if(_hp <= 0){
        alive = 0;
        _hp = 0;
    }
    return alive;
}




#endif