#include <iostream>
using namespace std;

class Farm
{
    public:
        int chicken_legs{0};
        int cows_legs{0};
        int pigs_legs{0};
        void animal(int x,int y,int z)
        {
            chicken_legs = chicken_legs + (2 * x);
            cows_legs = cows_legs + (4 * y);
            pigs_legs = pigs_legs + (4 * z);
        }
        int comput_legs()
        {
            return chicken_legs + cows_legs + pigs_legs;
        }
};

int main()
{
    Farm f1,f2,f3,f4,f5;
    f1.animal(2, 3, 5);
    f2.animal(1, 2, 3);
    f3.animal(5, 2, 8);
    f4.animal(17, 6, 9);
    
    int total_legs = f1.comput_legs() + f2.comput_legs() + f3.comput_legs() + f4.comput_legs();
    cout<<"Total Number of legs: "<<total_legs<<endl;
}