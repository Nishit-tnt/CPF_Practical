#include <iostream>
using namespace std;

struct Product {
    int id;
    char category;
    double price;
};

struct OrderA {
    char code;
    int quantity;
    double amount;
};

struct OrderB {
    double amount;
    int quantity;
    char code;
};

union SharedData {
    int integerValue;
    float floatValue;
    char characterValue;
};

int main() {
    Product product;

    cout << "========== COMPOSITE DATA REPRESENTATION ANALYZER ==========\n";
    cout << "Size of Product ID: " << sizeof(product.id) << " bytes\n";
    cout << "Size of Product Category: " << sizeof(product.category) << " bytes\n";
    cout << "Size of Product Price: " << sizeof(product.price) << " bytes\n";
    cout << "Total Product structure size: " << sizeof(Product) << " bytes\n";

    cout << "\nPadding and Alignment\n";
    cout << "OrderA size: " << sizeof(OrderA) << " bytes\n";
    cout << "OrderB size: " << sizeof(OrderB) << " bytes\n";

    SharedData data;
    cout << "\nUnion size: " << sizeof(SharedData) << " bytes\n";

    data.integerValue = 120;
    cout << "Integer value: " << data.integerValue << '\n';

    data.floatValue = 45.5f;
    cout << "After storing float, float value: " << data.floatValue << '\n';

    data.characterValue = 'X';
    cout << "After storing character, character value: " << data.characterValue << '\n';

    cout << "\nStructure stores each member separately.\n";
    cout << "Union shares memory among all members; only the most recently\n";
    cout << "stored member should be read.\n";
    return 0;
}
