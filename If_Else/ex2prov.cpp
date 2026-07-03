#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Escreva um numero: " << endl;
    cin >> num;
    if (num%2==0){
        cout << "Seu numero eh par";
    }
    else {
        cout << "Seu numero eh impar";
    }
return 0;
}