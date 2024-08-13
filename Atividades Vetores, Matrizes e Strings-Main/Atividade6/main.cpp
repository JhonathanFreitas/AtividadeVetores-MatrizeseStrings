#include <iostream>

#define MAX_M 20
#define MAX_N 25

using namespace std;

int main() {
    int M, N, i, j, k;
    int matriz[MAX_M][MAX_N], transposta[MAX_N][MAX_M], matrizK[MAX_M][MAX_N], matriz2[MAX_M][MAX_N], soma[MAX_M][MAX_N];

    cout << "Digite o numero de linhas (M <= 20): ";
    cin >> M;
    cout << "Digite o numero de colunas (N <= 25): ";
    cin >> N;

    cout << "Digite os elementos da matriz:\n";
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "Digite o valor de K para multiplicar a matriz: ";
    cin >> k;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matrizK[i][j] = k * matriz[i][j];
        }
    }

    cout << "Digite os elementos da segunda matriz:\n";
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            soma[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

    cout << "Matriz Transposta:\n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz multiplicada por K:\n";
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << matrizK[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Soma das duas matrizes:\n";
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
