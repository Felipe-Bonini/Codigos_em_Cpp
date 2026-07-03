#include <iostream>
using namespace std;
int main(){
    double num[3];
    double md=0;
    double soma=0;
        for (int i=0; i<3; i++){
            cout << "Escreva a " << i+1 << " nota do aluno" << endl;
            cin >> num[i];
                soma= num[i] +soma;
}
                md= soma/3;
            cout << "A media do aluno eh: " << md;
return 0;
}