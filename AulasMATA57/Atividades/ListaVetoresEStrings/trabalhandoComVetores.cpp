#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int vetorA[5];
	int vetorB[5];
	int somaInters = 0, somaDiferenca=0;
	
	for(int i=0; i<5;i++){
        cin>>vetorA[i];//Preenche VetorA        
		//Verifica so valor é repetid
		for(int j=1;j<=i;j++){
        	while(vetorA[i] == vetorA[j-1]){
        	//	cout << "repetido. enter again:\n";
				cin >> vetorA[i];
				continue;
			}	
		}
    
	}
	for(int m = 0;m<5;m++){		
    	cin>> vetorB[m];//preenche VetorB
		//Verifica so valor é repetido
		for(int k=1;k<=m;k++){
			while(vetorB[m]==vetorB[k-1]){
			//	cout << "num repetido, enter again:\n";
				cin>> vetorB[m]	;
				continue;
			}
		}
	}
    	
    	
	
	
	//Impressão
/*	cout << "vetor A:\n";
	for(int i = 0; i<5;i++){
		cout << vetorA[i] <<" ";
	}
	cout << "\n";
	cout << "vetor B:\n";
	for(int i = 0; i<5;i++){
		cout << vetorB[i] <<" ";
	}
	cout << "\n";*/

	//Compara e soma os valores da Intersecção
	for (int i=0; i<5;i++){
		for (int j=0; j<5;j++){
			if (vetorA[i] == vetorB[j]){
				somaInters +=vetorA[i];
				vetorA[i]-= vetorA[i];	//Remove o valor que foi somado p/ poder somar o resto						
			}
		}
	}
	//Soma o restante dos valores do vetorA
	for (int i=0;i<5;i++){
		somaDiferenca+= vetorA[i];
	}
	cout << somaDiferenca<<"\n";	cout << somaInters;
	
	
	return 0;	
}

