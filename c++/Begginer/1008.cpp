#include <iostream>

using namespace std;

int main() {
    int idFuncionario, horasTrabalhadas;
    float valorHora, salario;

    cin >> idFuncionario >> horasTrabalhadas >> valorHora;
    salario = horasTrabalhadas * valorHora;

    cout << "NUMBER = " << idFuncionario << endl;
    cout << fixed;
    cout.precision(2);
    cout << "SALARY = U$ " << salario << endl;

    return 0;
}
