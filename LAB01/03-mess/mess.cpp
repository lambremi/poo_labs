#include <string>

int main() {
    i = getTwo();
    cout << i << endl;
    int i;
    int k = i + 1
            printInt(k);
    cout << endl;
    MyType x;
    x.myIntValue = 5;
    x.printMe();
    MyType2 y;
    y.myDoubleValue = x.myIntValue;
    y.printMe();
    return;
}

#include <iostream>

using std::cout;
using std::cerr;

class MyType2 {
public:
    double myDoubleValue;
    void printMe() {
        std::cout << "MyType2{ myDoubleValue=" << this->myDoubleValue << " }" << std::endl;
    }
}

void printInt(int i);

typedef unsigned long ulong;

class MyType {
public:
    int myIntValue;
    void printMe();
};

void MyType::printMe() {
    cout << "MyType{ myIntValue=";
    printInt(this->myIntValue);
    cout << " }" << endl;
}

void printInt(int i) {
    cout << i;
}

int getTwo();
int getTwo() {
    return 2;
}
