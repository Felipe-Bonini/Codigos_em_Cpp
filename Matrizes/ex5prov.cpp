#include <iostream>
using namespace std;
int main(){
    int mat[5][5];
    for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
    cout << "Escreva o valor da posicao " << i+1 << ", " << j+1 << ": ";
    cin >> mat[i][j];
    }}
    for (int i=0; i<5; i++){
        int soma=0;
    for (int j=0; j<5; j++){
        soma+=mat[i][j];
    }
    cout << "A soma das linhas eh: " << soma << endl;
    }

return 0;
}