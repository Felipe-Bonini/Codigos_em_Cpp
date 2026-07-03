#include <iostream>
using namespace std;
int main(){
    int mat[4][4];
        for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cout << "Escreva o valor da posicao " << i+1 << ", "<< j+1 << ": ";
            cin >> mat[i][j];
                if (mat[i][j]%2==0){
                    cout << mat[i][j] << " "; 
                }
        }
        }
return 0;
}