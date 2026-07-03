#include <iostream>
using namespace std;
int main(){
    int vet[4];
    for (int i=0; i<4; i++){
    cout << "Escreva o " << i+1 << " valor: ";
    cin >> vet[i];
    }
    cout << endl;
    cout << "----------------------" << endl;
    cout << endl;
    int vet2[4];
    for (int i=0; i<4; i++){
    cout << "Escreva o " << i+1 << " valor: ";
    cin >> vet2[i];
    }
    cout << endl;
    cout << "----------------------" << endl;
    cout << endl;
    int vet3[4];
    for (int i=0; i<4; i++){
    vet3[i]=vet[i] +vet2[i];
    cout << vet3[i] << " ";
    }

return 0;
}