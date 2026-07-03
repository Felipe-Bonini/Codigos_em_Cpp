#include <iostream>
using namespace std;
int main(){
int num[2];
for (int i=0; i<2; i++){
cout << "Escreva dois numeros: ";
cin >> num[i];
}
int soma=0;
for (int i=0; i<2; i++){
soma=num[i] +soma;
}
cout << "A soma eh: " << soma << endl;
}