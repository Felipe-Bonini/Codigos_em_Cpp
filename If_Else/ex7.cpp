#include <iostream>
using namespace std;
int main(){
    int id;
        cout << "Escreva sua idade: ";
        cin >> id;
            if (id<=12){
                cout << "Voce eh uma crianca!";
            }
            else if (id<=17){
                cout << "Voce eh um adolescente!";
            }
            else if (id<=59){
                cout << "Voce eh um adulto!";
            }
            else {
                cout << "Voce eh um idoso!";
            }
return 0;
} 