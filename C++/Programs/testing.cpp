#include <iostream>
using namespace std;

class Matrix 
{
public:
    int row, col;
    int** mat;
    int flag = 0;

    void get_input() {
        cout << "No. of rows: ";
        cin >> row;
        if(row!=0 && row!= 0)
        {
            cout << "No. of columns: ";
            cin >> col;
            if(col!= 0 && col!= 0)
            {
                if (row < 0 || col < 0) 
                {
                    cout << "Invalid dimensions" << endl;
                    flag = 1;
                } 
                else 
                {
                    mat = new int*[row];
                    for (int i = 0; i < row; i++) 
                    {
                        mat[i] = new int[col];
                        for (int j = 0; j < col; j++) 
                        {
                            cin >> mat[i][j];
                        }
                    }   
                }
            }
            else
            {
                cout<<"Invalid";
                flag=1;
            }
        }
        else
        {
            cout<<"Invalid";
            flag=1;
        }
    }



    Matrix operator+(Matrix obj) 
    {
        Matrix result;
        if (row == obj.row && col == obj.col) 
        {
            result.row = row;
            result.col = col;
            result.mat = new int*[row];
            for (int i = 0; i < row; i++) 
            {
                result.mat[i] = new int[col];
                for (int j = 0; j < col; j++) 
                {
                    result.mat[i][j] = mat[i][j] + obj.mat[i][j];
                }
            }
        } 
        else 
        {
            cout << "Matrix dimensions do not match for addition" << endl;
            result.flag = 1;
        }
        return result;
    }

    Matrix operator-(Matrix obj) {
        Matrix result;
        if (row == obj.row && col == obj.col) 
        {
            result.row = row;
            result.col = col;
            result.mat = new int*[row];
            for (int i = 0; i < row; i++) 
            {
                result.mat[i] = new int[col];
                for (int j = 0; j < col; j++) 
                {
                    result.mat[i][j] = mat[i][j] - obj.mat[i][j];
                }
            }
        } 
        else 
        {
            cout << "Matrix dimensions do not match for subtraction" << endl;
            result.flag = 1;
        }
        return result;
    }

    void display() {
        if (flag == 0) {
            cout << "Result: " << endl;
            for (int i = 0; i < row; i++) 
            {
                for (int j = 0; j < col; j++) 
                {
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
};

int main() {
    Matrix m1, m2;
    m1.get_input();
    if (m1.flag == 0) 
    {
        m2.get_input();
    } 
    else 
    {
        cout << "Invalid" << endl;
        return 0;
    }

    if (m2.flag == 0) {
        string op;
        cout << "Operator: ";
        cin >> op;

        Matrix result;
        if (op == "+")
            result = m1 + m2;
        else if (op == "-")
            result = m1 - m2;

        result.display();
    } 
}


