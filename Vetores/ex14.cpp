#include <iostream>
using namespace std;
int  main(){
    int num[10];
    int qtpar=0;
        for (int i=0; i<10; i++){
            cout << "Escreva 10 numeros inteiros: " << endl;
            cin >> num[i];
        if (num[i]%2==0){
            qtpar++;
        }
        }
            cout << "Voce escreveu " << qtpar << " pares!";
return 0;
}