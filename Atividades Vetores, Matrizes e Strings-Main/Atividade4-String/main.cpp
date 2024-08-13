#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char cargo[51];
    float salario, novoSalario, diferenca;

    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    cin.ignore();  // Limpar o buffer do teclado

    cout << "Escolha o cargo do funcionario:\n";
    cout << "1. Gerente\n";
    cout << "2. Engenheiro\n";
    cout << "3. Tecnico\n";
    cout << "4. Outros\n";
    cout << "Digite o numero correspondente ao cargo: ";

    int opcao;
    cin >> opcao;
    cin.ignore();  // Limpar o buffer do teclado

    switch (opcao) {
        case 1:
            strcpy(cargo, "Gerente");
        novoSalario = salario * 1.10;
        break;
        case 2:
            strcpy(cargo, "Engenheiro");
        novoSalario = salario * 1.20;
        break;
        case 3:
            strcpy(cargo, "Tecnico");
        novoSalario = salario * 1.30;
        break;
        case 4:
            strcpy(cargo, "Outros");
        novoSalario = salario * 1.05;
        break;
        default:
            cout << "Opcao invalida. O aumento sera de 5%." << endl;
        strcpy(cargo, "Desconhecido");
        novoSalario = salario * 1.05;
        break;
    }

    diferenca = novoSalario - salario;

    cout << "Salario antigo: " << salario << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "Novo salario: " << novoSalario << endl;
    cout << "Diferenca: " << diferenca << endl;

    return 0;
}
