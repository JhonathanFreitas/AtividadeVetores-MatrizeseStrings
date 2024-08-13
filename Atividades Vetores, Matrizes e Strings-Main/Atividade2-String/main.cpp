#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[51], str2[51];

    cout << "Digite a primeira palavra: ";
    cin.getline(str1, 51);
    cout << "Digite a segunda palavra: ";
    cin.getline(str2, 51);

    cout << "Primeira palavra: " << str1 << endl;
    cout << "Segunda palavra: " << str2 << endl;

    if (strlen(str1) > 1) {
        cout << "Segunda letra da primeira palavra: " << str1[1] << endl;
    } else {
        cout << "A primeira palavra e muito curta para ter uma segunda letra." << endl;
    }

    if (strlen(str2) > 1) {
        cout << "Penultima letra da segunda palavra: " << str2[strlen(str2) - 2] << endl;
    } else {
        cout << "A segunda palavra e muito curta para ter uma penultima letra." << endl;
    }

    return 0;
}
