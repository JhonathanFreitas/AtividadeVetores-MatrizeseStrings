#include <iostream>

using namespace std;

int main() {
    int quantidade[5];
    float valor[5], total[5], totalCompra = 0;

    // Leitura das quantidades e valores unitarios
    for (int i = 0; i < 5; i++) {
        cout << "Digite a quantidade do produto " << i + 1 << ": ";
        cin >> quantidade[i];
        cout << "Digite o valor unitario do produto " << i + 1 << ": ";
        cin >> valor[i];
    }

    // Calculo do valor total por produto e do valor total da compra
    for (int i = 0; i < 5; i++) {
        total[i] = quantidade[i] * valor[i];
        totalCompra += total[i];
    }

    // Exibicao dos resultados
    for (int i = 0; i < 5; i++) {
        cout << "O valor total do produto " << i + 1 << " e: " << total[i] << endl;
    }
    cout << "O valor total da compra e: " << totalCompra << endl;

    return 0;
}
