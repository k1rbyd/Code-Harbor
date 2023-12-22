#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char action{};
    vector <int> numbers{};
    cout<<"Enter the number of elements:";
    int n{},i{0};
    cin>>n;
    
    while(n>i)
    {
        int x{};
        cin>>x;
        numbers.push_back(x);
        i++;
    }

    cout<<endl;

    bool state {false};

    while(!state)
    {
        cout<<"P : Print numbers"<<endl;
        cout<<"A : Add a number"<<endl;
        cout<<"M : Display the mean"<<endl;
        cout<<"S : Display the smallest"<<endl;
        cout<<"L : Display the largest"<<endl;
        cout<<"Q : Quit"<<endl;
        cout<<"Your choice:";
        cin>>action;
        cout<<endl;
    switch(action)
    {
        case 'p':
        case 'P':
            {
            for(auto i:numbers)
                cout<<i<<endl;
            cout<<endl;
            break;
            }
        case 'a':
        case 'A':
            {
            int x{};
            cin>>x;
            numbers.push_back(x);
            cout<<"Number Added"<<endl;
            cout<<endl;
            break;
            }
        case 'm':
        case 'M':
            {
            int mean{};
            int count{1};
            for(auto i:numbers)
            {
                mean+=i;
                count++;
            }
            mean /= count;
            cout<<"Mean:"<<mean<<endl;
            cout<<endl;
            break;
            }
        case 's':
        case 'S':
            {
                int smallest{numbers[0]};
                for(auto i:numbers)
                {
                    if (i<smallest)
                    smallest=i;
                }
                cout<<"Smallest:"<<smallest<<endl;
                cout<<endl;
                break;
            }
        case 'L':
        case 'l':
            {
                int largest{numbers[0]};
                for(auto i:numbers)
                {
                    if (i>largest)
                    largest=i;
                }
                cout<<"Largest:"<<largest<<endl;
                cout<<endl;
                break;
            }
        case 'q':
        case 'Q':
            cout<<"Exiting Program"<<endl;
            state = true;
            break;
        default:
            cout<<"Invalid Input, Try Again"<<endl;
    }
    }
}