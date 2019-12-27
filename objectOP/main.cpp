#include <iostream>
#include <string>
#include <vector>


using namespace std;



class Player {

// attributes 
public :
string name{};
int health {};
int xp {};


// methods


void talk (string input) {

    cout << name << "   says  " << input << endl;;  
}

bool isDead (int health) {

if (health <=0) {
    cout << "is dead" << endl;
    return true;

}

else {

    cout << " is alive " << endl;
    return false;

}

}


};


int main () {
Player frank;
Player james;
frank.name = "ash";
frank.health = 100;
james.name = "james";

frank.talk("hello world");
frank.isDead(0);

Player *enemy = new Player;

(*enemy).name = "enemy";

enemy->talk("hi enemny");

return 0;


}