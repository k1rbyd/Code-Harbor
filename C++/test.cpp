#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Item {
    int value, weight;
    double valuePerWeight;

    Item(int value, int weight) :
        value(value), weight(weight), valuePerWeight((double)value / weight) {}
};

bool compareItems(const Item& a, const Item& b) {
    return a.valuePerWeight > b.valuePerWeight;
}

double fractionalKnapsack(int W, const vector<Item>& items) {
    vector<Item> sortedItems = items; // Make a copy to avoid modifying the original vector
    sort(sortedItems.begin(), sortedItems.end(), compareItems);

    double finalValue = 0.0;
    for (const Item& item : sortedItems) {
        if (item.weight <= W) {
            W -= item.weight;
            finalValue += item.value;
        } else {
            finalValue += item.valuePerWeight * W;
            break;
        }
    }

    return finalValue;
}

int main() {
    int W = 100;
    vector<Item> items = {
        {200, 90},
        {100, 80},
        {120, 70}
    };

    cout << fractionalKnapsack(W, items) << endl;
    cout << "Name: Kaushik.D" << endl;
    cout << "Reg No: 22BCE0365" << endl;
    return 0;
}
