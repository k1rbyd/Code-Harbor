#include <iostream>
#include <string>
using namespace std;

class Courier
{
    public:
    int CourierID;
    string Name_of_Courier;
    double base_fare;
    void PrintBill()
    {
        cout<<"Enter the Courier ID:";
        cin>>CourierID;
        cout<<"Enter the Name of the Courier:";
        cin>>Name_of_Courier;
        cout<<"Enter the Base Fare:";
        cin>>base_fare;
    }
};

class International_servies : public Courier
{
    public:
    int shipping_cost1;
    int shipping_cost2;
    int weight;
    void FullBill()
    {
        shipping_cost1 = base_fare + 30;
        cout<<"Enter the weight in KG:";
        cin>>weight;
        shipping_cost2 = base_fare*weight;
        cout<<"Courier ID:"<<CourierID<<endl;
        cout<<"Name_of_Courier:"<<Name_of_Courier<<endl;
        cout<<"The Shipping Cost:"<<shipping_cost1<<endl;
        cout<<"The Total Shipping Cost:"<<shipping_cost2<<endl;
        if(shipping_cost2>100)
        cout<<"More Sale"<<endl;
        else
        cout<<"Less Sale"<<endl;
    }
};

int main()
{
    International_servies i2;
    i2.PrintBill();
    i2.FullBill();
}