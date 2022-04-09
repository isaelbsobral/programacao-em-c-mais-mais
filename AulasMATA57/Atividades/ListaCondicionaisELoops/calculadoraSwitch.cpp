#include <iostream>
using namespace std;
int main(){
    char operador;
    int n1, n2;
    cin >> operador;
    cin >> n1 >> n2;
    switch(operador){
    case '+':
        cout << "soma: "<< n1 + n2;
        break;
    case '-':
        cout << "subtracao: "<< n1- n2;
        break;
    case '*':
        cout << "multiplicacao: "<<n1*n2;
        break;
    case '/':
        if (n2 == 0){
            cout << "erro: divisao por zero";
            break;
        }else{
            cout<< "divisao: "<< n1/n2;
        }
    }
    return 0;
}