#include <iostream>
using namespace std;
int main(){
    cout << ">>>>>>>>>>MATRIZ 1<<<<<<<<<<";
    cout << endl;
    int mat[3][3];
        for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "Escreva o valor da posicao " << i+1 << ", " << j+1 << ": ";
            cin >> mat[i][j];
        }
        }
    cout << endl;
    cout << ">>>>>>>>>>MATRIZ 2<<<<<<<<<<";
    cout << endl;
    int mat2[3][3];
        for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "Escreva o valor da posicao " << i+1 << ", " << j+1 << ": ";
            cin >> mat2[i][j];
        }
        }
    cout << endl;
    cout << ">>>>>>>>>>MATRIZ 3<<<<<<<<<<";
    cout << endl;
    int mat3[3][3];
        for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            mat3[i][j]=mat[i][j] +mat2[i][j];
            cout << mat3[i][j] << " ";
        }
            cout << endl;
        }
return 0;
}