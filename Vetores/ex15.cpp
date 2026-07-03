#include <iostream>
using namespace std;
int main(){
    int num[10];
        for (int i=0; i<10; i++){
            cout << "Escreva o "<< i+1 << " numero inteiro: ";
            cin >> num[i];
        }
        for (int i=0; i<10; i++){
            cout << num[i] << endl;
        }
        cout << endl;
        for (int i=9; i>=0; i--){
        cout << num[i] << endl;
        }
return 0;
}