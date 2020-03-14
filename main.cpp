#include <iostream>
#include <vector>
#include <string>

#include "Player.cpp"

using namespace std;


int main(){

    Player beg(50,50,5,5,1.2,"beg");

    string name = beg.getName();

    int atk = beg.getCurrentAtk();

    cout << name << " have " << atk << " atk" << endl;



}