#include <iostream>
using namespace std;
int main(){
    float num, num2;
    float soma=0.0;
    float md=0.0;
        cout << "Escreva a primeira nota do aluno: ";
        cin >> num;
        cout << "Escreva a segunda nota: ";
        cin >> num2;
        soma=num +num2;
        md=soma /2.0;
        if (md>=6.0){
            cout << "Aprovado com media " << md << "!" << endl;
        }
        else if (md>=4.0){
            cout << "De recuperacao com media " << md << "!" << endl;
        }
        else {
            cout << "Reprovado com media " << md << "!" << endl;
        }
return 0;
}