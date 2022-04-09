#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float nota, media, soma=0;
    int qtdNotas = 0;
    while(nota >= 0){
        cin >> nota;
        if(nota >= 0){
          soma = soma+nota;
          qtdNotas = qtdNotas+1;
        }
    }
media = soma/qtdNotas;
cout <<"Media: " << fixed<<setprecision(2) << media;
    return 0;
}