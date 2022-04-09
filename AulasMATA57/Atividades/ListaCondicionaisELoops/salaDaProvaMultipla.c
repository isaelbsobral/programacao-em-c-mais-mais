#include <iostream>
using namespace std;//permite usar cin e cout

int main()
{
    char letra;
    cin >> letra;
    if (letra >= 'A'&& letra <='K'){
        cout << "Voce fara prova no Laboratorio 140.";
   }else if(letra >= 'L' && letra <= 'N'){
        cout << "Voce fara prova no Laboratorio 143.";
   }else if(letra >= 'O' && letra <= 'Z'){
        cout << "Voce fara prova no Laboratorio 144.";
   }else{
        cout << "Nome invalido!";   }

return 0; 
    
}