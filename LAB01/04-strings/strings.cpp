#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main( void ) {
    string sOff = "Hello World";
    string s = "";
    string s2 = "";
    ifstream ifs;
    char file[256];
    sOff.append(" and Hi to the Universe");
    s.append(sOff);
    s2.append(sOff);
    int k = 0;
    size_t posuni = 0, poso = 0, posl = 0;
    for (size_t i = 0; i < s.length(); i++) {
        k += s[i] == 'o';
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'o') {
            s[i] = '0';
        }
        else if (s[i] == 'l') {
            s[i] = '1';
        }
    }
    for (size_t i = 0; i < s2.length(); i++) {
        if (s2[i] == 'o') {
            poso = i;
            s2.replace(s2.begin() + poso, s2.begin() + poso + 1, 1, '0');
        }
        else if (s2[i] == 'l') {
            posl = i;
            s2.replace(s2.begin() + posl, s2.begin() + posl + 1, 1, '1');
        }
    }
    posuni = s.find("Uni");
    if (sOff == s) cout << "b. et c. sont égales" << endl;

    cout << "numbers of o : " << k << endl << "length = " << s.size() << endl;
    cout << "New string is \"" << s << "\"" << endl;
    cout << "s2 = \"" << s2 << "\"" << endl;
    cout << "Uni is at position " << posuni << endl;

    ifs.open("wdeeping.txt", ifstream::in);
    k = 0;
    int line = 1;
    while (ifs.getline(file, 256)) {
        cout << line++ << "\t" << file << endl;
        for (size_t i = 0; i < ((string)file).length(); i++) {
            k += ((string)file).substr(i, 3) == "the";
        }
    }
    cout << "Il y a " << k << " \"the\" dans le texte du dessus." << endl;
    return 0;
}
