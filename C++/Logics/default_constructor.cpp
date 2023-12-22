#include <iostream>
using namespace std;
#include <string>

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        Player(std::string name_val ="None",int health_val=0, int xp_value=0);    
};

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val}
    {
        cout<<"Done"<<endl;
    }

int main()
{
    Player frank("Frank");
    Player brank("Brank",100);
    Player franky("Franky",100,1);

}