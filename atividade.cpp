#include <iostream>

using namespace std;

int main(){
	char letra;
	int teste;
	
	char consoante[21] = {'b', 'c','d', 'f', 'g', 'h','j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w','x', 'y', 'z'};
	char vogal[5] = {'a', 'e', 'i', 'o', 'u'};	
	
	
	cout << "Digite uma letra e verificaremos se é vogal ou consoante: " << endl;
	cin >> letra;
	
	for(int i=0;i<26;i++){
		teste = 0;
		if(letra == consoante[i]){
			teste = 1;
			i = 26;
			
		}else if(letra == vogal[i]){
			teste = 2;
			i = 26;
		}else{
			teste = 0;
		}
		
		cout << teste << endl;
		
	}
	

	if(teste == 1){
		
		cout << "Você digitou uma CONSOANTE" << endl;
		
	}else if(teste == 2){
		
		cout << "Você digitou uma VOGAL" << endl;
		
	}else if(teste == 0){
		
		cout << "Você nao digitou um caractere válido" << endl;
	}
	
	
	
	
	
	return 0;
}

