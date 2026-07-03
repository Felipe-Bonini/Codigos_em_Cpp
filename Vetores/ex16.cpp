#include <iostream>
using namespace std;
int main(){
    int num[8];
    int soma=0;
    float md=0.0;
        for (int i=0.0; i<8.0; i++){
            cout << "Escreva o " << i+1 << " numero: ";
            cin >> num[i];
            soma=soma +num[i];
        }
        md=soma/8.0;
        int mm=num[0];
        int mn=num[0];
        for (int i=0; i<8; i++){
            if (num[i]>mm){
                mm=num[i];
            }
            if (num[i]<mn) {
                mn=num[i];
            }
        }
        cout << "A soma dos 8 numeros eh: " << soma << endl;
        cout << "A media dos 8 numeros eh: " << md << endl;
        cout << "O maior numero dos 8 numeros eh: " << mm << endl;
        cout << "O menor numero dos 8 numeros eh: " << mn << endl;
return 0;
}