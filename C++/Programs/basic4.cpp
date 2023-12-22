#include <iostream>
using namespace std;

void print(int*, int);
int* apply_all(int*, int, int*, int);

int main()
{
    int x, y;

    cout << "No. of elements in Array1: ";
    cin >> x;
    int* array1 = new int[x];
    cout << "Enter the elements: ";
    for (int i = 0; i < x; i++) {
        cin >> array1[i];
    }

    cout << "No. of elements in Array2: ";
    cin >> y;
    int* array2 = new int[y];
    cout << "Enter the elements: ";
    for (int i = 0; i < y; i++) {
        cin >> array2[i];
    }

    cout << "Array 1: ";
    print(array1, x);
    cout << "Array 2: ";
    print(array2, y);

    int* results = apply_all(array1, x, array2, y);
    int res = x * y;

    cout << "Results: ";
    print(results, res);

    delete[] array1;
    delete[] array2;
    delete[] results;

    return 0;
}

void print(int* num, int x)
{
    cout << "[ ";
    for (int i = 0; i < x; i++) {
        cout << *num++ << " ";
    }
    cout << "]" << endl;
}

int* apply_all(int* a, int a1, int* b, int b1)
{
    int* result = new int[a1 * b1];
    int index = 0;

    for (int j = 0; j < b1; j++) {
        for (int i = 0; i < a1; i++) {
            result[index] = a[i] * b[j];
            index++;
        }
    }
    return result;
}
