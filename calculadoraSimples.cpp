#include <iostream>

using namespace std;

char usrOperation;
double usrFirstNum;
double usrSecondNum;
double result;
int exitChoice;

double operation();
void finish();

int main()
{
    cout << "------------------------------------" << endl;
    cout << "--- Programa Calculadora Simples ---" << endl;
    cout << "------------------------------------" << endl;

    do{
        result = operation();
        cout << "Resultado: " << result << endl;
        finish();
    } while (exitChoice != 2);

    return 0;
}

double operation(){
    cout << "Selecione o tipo da Operação que deseja realizar: (+ - / *)" << endl;
    cout << ":";
    cin >> usrOperation;
    if (usrOperation != '+' && usrOperation != '-' && usrOperation != '/' && usrOperation != '*'){
        cout << "Por favor, digite uma operação válida!" << endl;
        operation();
    }

    cout << "Informe o primeiro numero para operação: ";
    cin >> usrFirstNum;
    cout << "Informe o segundo numero para operação: ";
    cin >> usrSecondNum;

    switch(usrOperation){
        case '+':
            return usrFirstNum + usrSecondNum;
        case '-':
            return usrFirstNum - usrSecondNum;
        case '/':
            return usrFirstNum / usrSecondNum;
        case '*':
            return usrFirstNum * usrSecondNum;
    }
}

void finish(){
    cout << "Deseja realizar outro cálculo?" << endl;
    cout << "(1) Sim (2) Não" << endl;
    cin >> exitChoice;
    if (exitChoice != 1 && exitChoice != 2){
        cout << "Por favor, digite uma opção válida!" << endl;
        finish();
    }
}
