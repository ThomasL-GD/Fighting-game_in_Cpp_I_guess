#include <iostream>
#include <vector>
#include <string>
#include <random>


#include "Ennemy.cpp"
using namespace std;


int main(){
    
    cout << "Salut toi ! prepare toi a prendre cher !" << endl;
    cout << "Un monstre vous attaque !" << endl;

    Ennemy Corona(10,100,2,"Corona");
    Ennemy Virus(20,100,2,"virus");

    int varAtkc = Corona.getAtkEnnemy();
    int varLifec = Corona.getLifeEnnemy();
    int varChargec = Corona.getChargeEnnemy();
    std::string varNomc = Corona.getNomEnnemy();

    int varAtkv = Virus.getAtkEnnemy();
    int varLifev = Virus.getLifeEnnemy();
    int varChargev = Virus.getChargeEnnemy();
    std::string varNomv = Virus.getNomEnnemy();

    cout << "Un monstre vous attaque ! Voici ses caractéristiques >>> Il se nomme : " << varNomc << "/  Son attaque : "<< varAtkc << "/  Sa vie : " << varLifec << "/  Sa charge: " << varChargec << endl;
    


  


}