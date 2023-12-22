// coder program

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxzlwebgjhqdyvtkfuompciasr"};

    cout<<"Enter the Message:";
    string input;
    getline(cin,input);

    string result(input.size(), ' ');
    int count{0};
    int pos{0};

    for(char c:input)
    {
        for (char c1:alphabet)
        {
                if (c1==c)
                {
                    count = alphabet.find(c1);
                    result.at(pos)=key.at(count);
                    pos++;
                }
            }
    }
    cout<<"\nEncrypting Message....\n"<<endl;
    cout<<"Code:"<<result<<endl<<endl;
    cout<<"Decrypting Message....\n"<<endl;
    cout<<"Message:"<<input<<endl;
}