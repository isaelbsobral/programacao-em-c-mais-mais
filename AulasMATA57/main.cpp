#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <iomanip> // biblioteca para fun��es de casas decimais
using namespace std;//permite usar cin e cout

int main()
{
    setlocale(LC_ALL, "Portuguese");//Habilita exibi��o de caracteres em portugu�s no console
   /* int num;
    cout << "Hello world!" << endl; //fim da fun��o
    cout << "Digite o n�mero: ";
    cin >> num;

    //cout << "N�mero: \n"<< num;
   //Usando condicionais
    if(num>=100){
        cout << num << " � maior que 100\n";
    }
    else{
        cout<< num << " � menor que 100\n";
        }



    switch (num%2){
    case 0:
        if (num == 0){
            cout << num <<" � nulo\n";
            break;
        }
        cout<< num << " � par\n";
        break;
    case 1:
        cout << num << " � �mpar\n";
        break;

    default:
        cout << num << " � 0\n";
    }

    //Usando loops
    int contador = 1;

    do{
        cout << contador<< "\n";
        contador++;
    }while(contador <=10);

    while(contador < num){//Testa a condi��o no in�cio
        cout << num << " \n";
        num--;
        continue;
    }
    cout << " \n";

    for (contador = 1; contador <=10; contador ++){//Testa a cada itera��o
       cout << contador <<" \n";

    }

   */
   //Quest�o A da lista 1
   /*char letra;
   cin >> letra;
   if (letra >= 'A'&& letra <='K'){
        cout << "Voce fara prova no Laboratorio 140";
   }else if(letra >= 'L' && letra <= 'N'){
        cout << "Voce fara prova no Laboratorio 143";
   }else if(letra >= 'O' && letra <= 'Z'){
        cout << "Voce fara prova no Laboratorio 144";
   }else{
        cout << "Nome invalido!";   }*/


    //Quest�o B da lista 1
/*
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
    */

    //Quest�o C  da lista 1
    /*int a,b,i;
    cin >> a;
    cin >> b;
    int c = b-a;
    for(i=0;i<=c;i++){
        cout <<a+i<<" ";

    }*/
    //Quest�o D da lista 1
    /*float nota, media, soma=0;
    int qtdNotas = 0;
    while(nota >=0){
        cin >> nota;
        if(nota>=0){
          soma = soma+nota;
          qtdNotas = qtdNotas+1;
        }
    }
    media = soma/qtdNotas;
    cout <<"Media: "<< fixed<< setprecision(2)<< media;*/

    //Quest�o E da lista 1
    int numero, qtdNPos = 0,soma = 0;
    do{
        cin >> numero;
        if(numero > 0){
            soma = soma + numero;
            qtdNPos +=1;        }

    }while(numero>0);
    cout << soma << "\n";
    cout << qtdNPos;
    return 0;
}
