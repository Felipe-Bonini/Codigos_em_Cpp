#include <iostream>
using namespace std;
int main(){
    int num;
    int fat=1;
        cout << " Escreva um numero inteiro: " << endl;
        cin >> num;
        for (int i=num; i>=1; i--){
            fat=fat *i;
        }
        cout << "Seu numero fatorial eh: " << fat << endl;
return 0;
}