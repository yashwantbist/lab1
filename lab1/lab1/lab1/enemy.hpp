
/*
We are creating an enemy object that has:
-name (string)
-speed (int)
-health (int)
-attack (int)
-defence (int)


Declare the current member functions (You will define them in the .cpp file):
printInfo: prints all info of the enemy (returns nothing)
takeDamage: takes in an int as a parameter,
    then changes health to the incoming value minus the defence.
    if the incoming value is less than the defence, do nothing (this returns nothing)
*/


#include <string>


using namespace std;


struct Enemy {

    string name;
    int speed;
    int health;
    int attack;
    int defense;

    void printInfo();
    void takeDamage(int);
};


