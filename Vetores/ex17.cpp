#include <iostream>
using namespace std;
int main(){
    int num[15];
    int qtp=0;
    int qti=0;
        for (int i=0; i<15; i++){
            cout << "Escreva o " << i+1 <<" numero inteiro: ";
            cin >> num[i];
                if (num[i]%2==0){
                    qtp++;
                }
                else {
                    qti++;
                }
        }
        cout << "Tem " << qtp << " numeros pares dentre os que escreveu!" << endl;
        cout << "Tem " << qti << " numeros impares dentre os que escreveu!" << endl;
}