#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> & ,int);
void add(vector <int> & ,int);
void mean(vector <int> & ,int,int);
void smallest(vector <int> &,int,int);
void largest(vector <int> &,int,int);

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
            display(numbers, i);
            break;
            }
        case 'a':
        case 'A':
            {
            add(numbers, i);
            i=i+1;
            break;
            }
        case 'm':
        case 'M':
            {
            int mea{0};
            mean(numbers,i,mea);
            break;
            }
        case 's':
        case 'S':
            {
            int small{numbers[0]};
            smallest(numbers,i,small);
            break;
            }
        case 'L':
        case 'l':
            {
            int large{numbers[0]};
            largest(numbers,i,large);
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

void display(vector <int> &number,int i)
{
    for(int le{0};le<i;le++)
    {
        cout<<number[le]<<endl;
    }
    cout<<endl;
}

void add(vector <int> &number,int i)
{
    int x;
    cin>>x;
    number[i]=x;
}

void mean(vector <int> &number,int i, int mea)
{
    for(auto c:number)
        mea+=c;
    cout<<"Mean:"<<mea/i<<endl;
}

void smallest(vector <int> &number ,int i,int small)
{
    for(auto c:number)
    {
        if(c<small)
        {
            small = c;
        }
    }
    cout<<"smallest:"<<small;
    cout<<endl;
}

void largest(vector <int> &number ,int i,int large)
{
    for(auto c:number)
    {
        if(c>large)
        {
            large = c;
        }
    }
    cout<<"largest:"<<large;
    cout<<endl;
}
