#include <iostream>
using namespace std;
int main(){
    char op;
    int num1, num2;
        cout << "Defina a operacao (+,-,*,/): " << endl;
        cin >> op;
        cout << "Escreva o primeiro numero: ";
        cin >> num1;
        cout << "escreva o segundo numero: ";
        cin >> num2;

        switch (op)
        {
        case '+':
            cout << "A expressao ficara: " << num1 +num2;
            break;
        case '-':
            cout << "A expressao ficara: " << num1 -num2;
            break;
        case '*':
            cout << "A expressao ficara: " << num1 *num2;
            break;
        case '/':
            cout << "A expressao ficara: " << num1 /num2;
            break;
        default:
            cout << "Operacao invalida!";
            break;
        }
return 0;
}