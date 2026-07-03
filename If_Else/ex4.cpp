#include <iostream>
using namespace std;
int main(){
    int num[2];
    for (int i=0; i<2; i++){
        cout << "Escreva 2 numeros inteiros: " << endl;
        cin >> num[i];
    }
        if (num[0]>num[1]){
            cout << "O maior numero eh : " << num[0];
        }
        else if (num[1]>num[0]) {
            cout << "O maior numero eh : " << num[1];
        }
        else {
            cout << "Os dois numeros sao iguais!";
        }

return 0;
}