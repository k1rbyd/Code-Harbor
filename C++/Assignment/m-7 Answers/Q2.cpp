#include <iostream>
using namespace std;

class MyMatrix {
public:
    int rows, cols;
    int **data;

    MyMatrix() {
        cin >> rows >> cols;
        cin.ignore();
        data = new int *[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    MyMatrix(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
        data = new int *[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    void addMatrix(MyMatrix matrix) {
        if (rows != matrix.rows || cols != matrix.cols) {
            cout << "Invalid operation: Matrices have different dimensions.";
            return;
        }

        MyMatrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + matrix.data[i][j];
            }
        }

        printMatrix(result);
    }

    void subMatrix(MyMatrix matrix) {
        if (rows != matrix.rows || cols != matrix.cols) {
            cout << "Invalid operation: Matrices have different dimensions.";
            return;
        }

        MyMatrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] - matrix.data[i][j];
            }
        }

        printMatrix(result);
    }

    void printMatrix(MyMatrix matrix) {
        for (int i = 0; i < matrix.rows; i++) {
            for (int j = 0; j < matrix.cols; j++) {
                cout << matrix.data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MyMatrix matrix1, matrix2;
    string op;
    cin >> op;

    if (op == "+") {
        matrix1.addMatrix(matrix2);
    } else if (op == "-") {
        matrix1.subMatrix(matrix2);
    } else {
        cout << "Invalid input";
    }

    return 0;
}
