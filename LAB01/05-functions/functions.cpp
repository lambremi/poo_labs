#include <iostream>
#include <string>

using namespace std;

void addAndPrint(int a, int b) {
    cout << a + b << endl;
}

void addAndPrint(string s1, string s2) {
    cout << s1 + s2 << endl;
}

void addAndPrint(double x, double y) {
    cout << x + y << endl;
}

void addAndPrint(float x, float y) {
    cout << x + y << endl;
}
int main( void ) {
    addAndPrint(1, 1);
    addAndPrint("je suis ton", " père");
    addAndPrint(1.5, 1.5);
    addAndPrint(1., 1.5);
    return 0;
}
