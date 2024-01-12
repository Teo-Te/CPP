#include <iostream>
#include <string>

using namespace std;

class Player {
    private:
        string name;
        int health;
        int xp;

    public:
        void set_name(string name_val) {
            name = name_val;
        }

        string get_name() {
            return name;
        }

        // Overloaded Constructors, we also can use immidietly initialization, also we can use delegating constructors, 
        // also we can use default constructors and to add to that copying contructors just in case, (im durnk rn, but i think i got it)
        Player() {
            cout << "No args constructor called" << endl;
        }

        Player(string name) {
            cout << "String arg constructor called" << endl;
        }

        Player(string name, int health, int xp) {
            cout << "Three args constructor called" << endl;
        }

        ~Player() { // to destroy objects u know so as to free space and shit cuh c++ is smart
            cout << "Destructor called for " << name << endl;
        }
    
};

int main() {
    {
        Player slayer;
        slayer.set_name("Lessgooo");
    }

    {   // listening to ermal mamaqi - mos harro te vish diten e veres
        Player Arteo;
        Arteo.set_name("Arteo");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 3);
        villain.set_name("Villain");
    }

    Player *enemy = new Player; // pointers and shit u know heap stored and everything + references
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;

    return 0;
}

// epo qr nuk hidhen per qamet ato dreq materiale pune ne mediafire interneti per zhele.
// kush iken te mojsiu neser qe n pik t sabahut n 45 grad (98.42%)