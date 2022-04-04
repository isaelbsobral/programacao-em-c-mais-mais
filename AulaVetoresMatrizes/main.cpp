#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Vetores
    /*
    double numbers[5], soma= 0,cont=0, media;

    cout << "Digite 5 números: " << endl;
    //Recebendo valores do teclado e armazenando no vetor numbers
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
        soma+=numbers[i];
        cont++;
    }
    cout << "Os número são: ";
     //Imprimindo os dados armazenados dentro vetor
    for (int n = 0; n < 5; ++n) {
        cout << numbers[n] << "  ";
    }
    media = soma/cont;
    cout <<"\nMédia:" << media;
    //Matrizes

    //Exibindo os valores já definidos dos índices
    //int matriz[3][2] = {{2, -5},
                      {4, 0},
                      {9, 1}};
    int matriz2[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Elemento[" << i << "][" << j << "] = " << matriz[i][j] << endl;
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j=0;j<3;j++){
            cin >> matriz2[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Elemento[" << i << "][" << j << "] = " << matriz2[i][j] << endl;
        }
    }*/
    int vetorA[5], vetorB[5];
    int vDiferenca[10], vInters[10];
    int soma=0;
    for(int i=0; i<5;i++){
          cin>>vetorA[i];
    }
    for(int j=0; j<5;j++){
        cin>>vetorB[j];
    }
     /*for (int n = 0; n < 5; ++n) {
        cout << vetorA[n] << "  ";
     }*/

     for(int k = 0;k<5;k++){
            for(int m=0;m<5;m++){
              if(vetorA[k]!= vetorB[m]){
                soma +=vetorA[k];
            }
            }



     }
     for (int n = 0; n < 5; ++n) {
        cout << vetorA[n] << "  ";
     }
     for (int n = 0; n < 5; ++n) {
        cout << vetorB[n] << "  ";
     }
     cout <<"Soma: "<< soma;
    return 0;
}
