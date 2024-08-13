#include <iostream>

using namespace std;

int main() {
    int n, vetor[10], maior1, maior2, somaPares = 0;

    cout << "Quantos elementos voce deseja inserir (maximo 10): ";
    cin >> n;

    if (n > 10) n = 10;

    for (int i = 0; i < n; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    if (vetor[0] > vetor[1]) {
        maior1 = vetor[0];
        maior2 = vetor[1];
    } else {
        maior1 = vetor[1];
        maior2 = vetor[0];
    }

    for (int i = 2; i < n; i++) {
        if (vetor[i] > maior1) {
            maior2 = maior1;
            maior1 = vetor[i];
        } else if (vetor[i] > maior2) {
            maior2 = vetor[i];
        }
    }

    for (int i = 1; i < n; i += 2) {
        if (vetor[i] % 2 == 0) {
            somaPares += vetor[i];
        }
    }

    cout << "Os dois maiores elementos sao: " << maior1 << " e " << maior2 << endl;
    cout << "A soma dos elementos pares em posicoes impares e: " << somaPares << endl;

    return 0;
}