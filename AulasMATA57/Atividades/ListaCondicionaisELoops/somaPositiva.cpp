#include <iostream>
using namespace std;
int main()
{
    int numero, qtdNPos = 0,soma = 0;
     do{
        cin >> numero;
        if(numero > 0){
            soma = soma + numero;
            qtdNPos +=1;        }

    }while(numero > 0);
    cout << soma << "\n";
    cout << qtdNPos;
    return 0;
}