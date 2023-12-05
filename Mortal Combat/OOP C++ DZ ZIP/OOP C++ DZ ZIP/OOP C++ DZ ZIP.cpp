
#include<iostream>

using namespace std;

struct CombatHero {

    int hp;
    int defence = 30;
    int attack = 50;
    int health;
    int xray;
    int result;


    CombatHero(int HP) {
        this->hp = HP;

    }

    int operator - (CombatHero attack) {
        this->result = this->hp - attack.attack;
        return this->result;
    }


    int operator ++ (int) {
        this->result += 30;
        return this->result;
    }

    int operator -- (int) {
        this->result -= 20;
        return this->result;
    }

    int operator / (CombatHero xray) {
        this->result = this->hp - (xray.attack * 2);
        return this->result;
    }

    void Show() {
        cout << "Scorpion: " << this->result << endl;
    }

};



int main()
{

    CombatHero Scorpion = 999;
    CombatHero SubZero = 100;

    Scorpion - SubZero;

    Scorpion++;

    Scorpion--;

    Scorpion / SubZero;

    Scorpion.Show();
}
