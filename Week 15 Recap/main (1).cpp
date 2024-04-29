// Aaron Holladay coding 1A
// Week 15 day 1 spring 2024

/* this is a block comment. */
/*
    Recap
    - variables
        - int, string, bool, float, 
    - arrays
        - length, zero-indexed
    - vectors
        - algorithms, .size(), 
    - functions
        - sending and returning variables, parameters
    - classes
        - public vs private
        - getters and setters,
        - data members and member functions
        - constructors
    - headers
    - file read/write
    - debugging
*/

// questions
// 1. can a class call a function or variable in another class?
// 2. how do classes "hold a weapon" or keep track of variables?





#include <iostream>
#include <string>
using namespace std;

enum difficulty {EASY, MEDIUM, HARD};
enum shipType {TUGBOAT = 25, FRIGATE = 50, BATTLESHIP = 250, CARRIER = 1000};
// these could be lowercase

class robot {
public: 
    string name = "Robbalobba";
};

class weapon {
public:
    string name = "Mace of Doom";
    int damage = 20;
};

class human {
public:
    string name = "Thaddeus";
    robot buddy;
    weapon myWeapon;

    // constructor, is called when we create a human.
    human() { SayHello(); }

    void SayHello() {
        cout << "Hi! My name is " << name << " and my robot's name is " << buddy.name << ".\n";
        cout << "My weapon's name is " << myWeapon.name << " and it does " << myWeapon.damage << ".\n";
    }
};

int main() {
    
    cout << "Hello World!\n";
    shipType playerShip = TUGBOAT;

    int playerMoney = 5000;

    if(playerShip == TUGBOAT) {
        cout << "You've got a tugboat! That's cool.\n";
        playerMoney -= TUGBOAT;
    }
    else if(playerShip == 1000) {
        cout << "You've got a carrier! Wow!!\n";
        playerMoney -= CARRIER;
    }

    shipType enemyShip = FRIGATE;

    if(playerShip > enemyShip) {
        cout << "Hey! You've got a better ship than I do! No fair!\n";
    }

    cout << "Your money is now $" << playerMoney << ".\n";
    
    human firstHuman;            // answer to question 1: can a class call another class?

    // question 2. making an item that we can give to the firstHuman.
    weapon coolSword;
    coolSword.name = "Sword of Density";
    coolSword.damage = 9999;

    firstHuman.myWeapon = coolSword;        // now the firstHuman instance has the coolsword.
    firstHuman.SayHello();

    // let's talk about memory addresses for one second.
    cout << "The memory address of coolSword is " << &coolSword << ".\n";
    cout << "The memory address of firstHuman.myWeapon is " << &firstHuman.myWeapon << ".\n";
}