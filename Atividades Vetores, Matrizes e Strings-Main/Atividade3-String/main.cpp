#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char string[101];
    int count = 0;

    cout << "Digite uma palavra: ";
    cin.getline(string, 101);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == 'a') {
            string[i] = 'b';
            count++;
        }
    }

    cout << "Numero de caracteres modificados: " << count << endl;
    cout << "Palavra modificada: " << string << endl;

    return 0;
}
