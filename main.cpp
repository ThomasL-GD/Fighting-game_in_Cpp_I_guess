#include <iostream>
#include <vector>
#include <string>

#include "Player.cpp"

using namespace std;


int main(){

    Player beg(1000,1000,50,50,3,"beg");

    string name = beg.getName();

    int atk = beg.getCurrentAtk();

    cout << name << " have " << atk << " atk" << endl;

    for(int i = 0; i<5; i++){
        beg.powerUp();
        atk = beg.getCurrentAtk();
        cout << "You powered you up, your attack is now at " << atk << " !" << endl;
    }

    int dmg = beg.attack();
    atk = beg.getCurrentAtk();

    cout << "You attack and make " << dmg << " damage !" << endl << "Your attack is now at " << atk << endl << endl;

    dmg = 150;

    for (int i = 0; i<50; i++){

    bool alive = beg.takeDamage(dmg);
    int life = beg.getHp();

    cout << alive << endl << life << endl;

    if(alive == 0){
        i = 55;
        cout << "You're dead haha !" << endl;
    }
    
    }





}