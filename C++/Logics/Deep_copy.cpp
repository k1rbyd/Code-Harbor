#include <iostream>
using namespace std;

class Deep
{
    private:
        int *data;
    public:
        Deep(int d);                    //constructor
        Deep(const Deep &source);       //copy constructor
        ~Deep();                        //destructor
        void display_deep() const   
        {
            cout<<*data<<endl;
        }
        void set_data_value(int d)   
        {
            *data = d;
        }
        int get_data_value() const    
        {
            return *data;
        }
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    :Deep{*source.data}
    {
        cout<<"Copy Constructor"<<endl;
    }

Deep::~Deep()
{
    delete data;
    cout<<"Deleted"<<endl;
}

int main()
{
    Deep obj1 {100};
    obj1.display_deep();

    obj1.set_data_value(1000);       
    Deep obj2 {obj1};                

    obj1.display_deep();
    obj2.display_deep();

    return 0;
}
