#include <iostream>

using namespace std;

int main() {
    int numeros[5];
    int soma = 0;

    // Leitura dos elementos
    for (int i = 0; i < 5; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >>  numeros[i];
    }

    // Soma dos elementos impares
    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 != 0) {
            soma += numeros[i];
        }
    }

    cout << "A soma dos numeros impares e: " << soma << endl;

    return 0;
}

