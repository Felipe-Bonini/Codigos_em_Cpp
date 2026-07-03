#include <iostream>
using namespace std;
int main(){
    int l1;
    cout << "Escreva o valor do primeiro lado do triangulo: ";
    cin >> l1;
    int l2;
    cout << "Escreva o valor do segundo lado do triangulo: ";
    cin >> l2;
    int l3;
    cout << "Escreva o valor do terceiro lado do triangulo: ";
    cin >> l3;
    if (l1==l2 && l2==l3){
        cout << "Seu triangulo eh equilatero!";
    }
    else if (l1!=l2 && l2!=l3 && l1!=l3){
        cout << "seu triangulo eh escaleno!";
    }
    else {
        cout << "Seu triangulo eh isoceles!";
    }
}