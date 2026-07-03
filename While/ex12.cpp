#include <iostream>
using namespace std;
int main(){
    int num;
        cout << "Escreva um numero inteiro  (0 para parar): ";
        cin >> num;
    while (num!=0){
        cout << "Voce digitou:  " << num << endl;
        cout << "Escreva outro numero (0 para parar): ";
        cin >> num;
    }
    
return 0;
}