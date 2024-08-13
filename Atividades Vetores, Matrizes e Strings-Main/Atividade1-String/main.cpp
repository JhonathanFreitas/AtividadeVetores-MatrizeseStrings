#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nome[51], menorNome[51];
    bool primeiroNome = true;

    while (true) {
        cout << "Digite um nome (ou digite 'fim' para encerrar): ";
        cin.getline(nome, 51);

        if (strcmp(nome, "fim") == 0) {
            break;
        }

        if (primeiroNome || strcmp(nome, menorNome) < 0) {
            strcpy(menorNome, nome);
            primeiroNome = false;
        }
    }

    if (!primeiroNome) {
        cout << "O nome lexicograficamente menor e: " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi digitado." << endl;
    }

    return 0;
}
