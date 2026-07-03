#include <iostream>
using namespace std;
int main(){
    int num[4][4];
    int soma=0;
        for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cout << "Escreva o valor da linha " << i+1 << ", coluna " << j+1 << ": ";
            cin >> num[i][j];
            soma+=num[i][j];
        }
        }
        for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cout << num[i][j] << " ";
        }
        cout << endl;
        }

        cout << "A soma de todos os valores da matriz eh: " << soma; 
return 0;
}