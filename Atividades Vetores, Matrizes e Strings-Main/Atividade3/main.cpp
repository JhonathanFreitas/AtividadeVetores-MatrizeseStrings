#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float notas[5], media = 0, desvio[5], desvioQuadrado[5], somaQuadrados = 0, variancia, desvioPadrao;

    for (int i = 0; i < 5; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        media += notas[i];
    }

    media /= 5;

    for (int i = 0; i < 5; i++) {
        desvio[i] = notas[i] - media;
        desvioQuadrado[i] = desvio[i] * desvio[i];
        somaQuadrados += desvioQuadrado[i];
    }

    variancia = somaQuadrados / 5;
    desvioPadrao = sqrt(variancia);

    cout << "Variancia: " << variancia << endl;
    cout << "Desvio Padrao: " << desvioPadrao << endl;

    return 0;
}

