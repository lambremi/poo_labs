#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void exo2a() {
	int i = 42;
	cout << "i = " << i << endl;
}

void exo2b() {
	cout << "42" << endl;
}

void exo2c() {
	float f;
	cout << "f = ";
  cin >> f;
  cout << "f = " << f << endl;
}

void exo2d() {
	float f1, f2;
	cout << "f1, f2 = ";
  cin >> f1 >> f2;
  cout << "f1 = " << f1 << ", f2 = " << f2 << endl;
}

void exo2e() {
	string s;
	cout << "s = ";
	cin >> s;
	cout << "s = " << s << endl;
}

void exo2f() {
	string s;
	cout << "give a sentence" << endl;
	cin.ignore();
	getline(cin, s);
	cout << "s = " << s << endl;
}

void exo2g() {
	string s;
	string word;
	int number;
	cout << "Give a word and a number: ";
	getline(cin, s);
	stringstream(s) >> word >> number;
	cout << "word = " << word << ", number = " << number << endl;
}

int main() {
	exo2a();
	exo2b();
	exo2c();
	exo2d();
	exo2e();
	exo2f();
	exo2g();
	return 0;
}
