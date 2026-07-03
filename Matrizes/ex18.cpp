#include <iostream>
using namespace std;
int main(){
    int num[5];
        for (int i=0; i<5; i++){
            cout << "Escreva o " << i+1 << " numero: ";
            cin >> num[i];
        }
        cout << endl;
        cout << "----------------------------------------";
        cout << endl;
        
    int num2[5];
        for (int i=0; i<5; i++){
            cout << "Escreva o " << i+1 << " numero: ";
            cin >> num2[i];
        }
    int num3[5];
        for (int i=0; i<5; i++){
            num3[i]=num[i] +num2[i];
        }
        cout << endl;
        cout << "----------------------------------------";
        cout << endl;
        for (int i=0; i<5; i++){
            cout << num3[i] << " ";
        }
return 0;
}