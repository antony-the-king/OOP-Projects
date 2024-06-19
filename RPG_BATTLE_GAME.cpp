#include <iostream>
#include <string>
using namespace std;

//Base class
class character{
    protected:
        string name;
        int health;
        int attackpower;

    public:
        character(string n,int h, int a): name(n),health(h), attackpower(a){}

        virtual void displaystatus(){
            cout<< "Name: "<< name<< ", Health: "<< health <<", AttackPower: "<<attackpower<< endl;
        }
        virtual void attack(character&target){
            cout << name << "for "<< attackpower<< " damage!\n";

            target.health -=attackpower;
        }

        bool isalive(){
            return health > 0;
        }
};


//Derived class :Hero

class Hero: public character{
    public:
        Hero(string n): character(n,100 ,15){}

        void specialmove(character&target){
            cout<< name << " use a special move on "<< target.name<< " for "<< (attackpower * 2)<< " damage!\n";
            target.health-=(attackpower * 2);

        }
};

class Monster : public character{
    public:
        Monster(string n):
        character(n,80,10){}

        void roar(){
            cout<< name << " roars and increases its attack power!\n ";
            attackpower +=5;
        }
};


        int main(){
            Hero hero("Knight");
            Monster monster("Dragon");

            hero.displaystatus();
            monster.displaystatus();

            hero.attack(monster);
            monster.displaystatus();

            monster.roar();
            monster.attack(hero);
            hero.displaystatus();

            hero.specialmove(monster);
            monster.displaystatus();

            if(!monster.isalive()){
                cout<< monster.name << " is defeated!\n";
            }

                return 0;

        }