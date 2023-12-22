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
        void set_name(string name_val)
        {
            name = name_val;
        }
        Player()
        {
            cout<<"Player Created\n";
        }

        Player(string name)
        {
            cout<<name<<endl;
        }
        Player(string name,int health,int xp)
        {
            cout<<name<<endl<<health<<endl<<xp<<endl;
        }
        
        ~Player()
        {
            cout<<"Object destroyed:"<<name<<"\n";
        };
};

int main()
{
    Player p1;
    p1.set_name("Kaushik");
                                          // first come last serve
    Player p2("KK",100,12);              // kaushik gets destroyes last
    p2.set_name("KK");

    Player *evil = new Player("Hero",100,0);
    delete evil;
}

