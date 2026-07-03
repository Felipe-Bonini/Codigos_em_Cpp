#include <iostream>
using namespace std;
int main(){
    int num[3][3];
        for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "Escreva o numero da linha " << i+1 << ", coluna " << j+1 << endl;
            cin >> num[i][j]; 
        }}
        cout << endl;
        for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << num[i][j] << " "; 
        }
        cout << endl;
    }
return 0;
}