#include <iostream>
using namespace std;
int main(){
    int salb;
    cout << "Digite o salario bruto: " << endl;
    cin >> salb;
    int des;
    cout << "Digite o desconto: " << endl;
    cin >> des;
    int sal=0;
    sal=salb-salb*(des/100);
    cout << "O salario liquido eh: " << sal << endl;

return 0;
}