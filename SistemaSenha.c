#include <stdio.h>
#include <locale.h>
#include <string.h>

char senha[6] = "123456";

void VerificaSenha(){
	
	int i = 0;
	char senhaInserida[6];
	
	printf("Insira a senha: ");
	scanf(" %s", &senhaInserida);
	
	i = strcmp(senha, senhaInserida);
	
	if(i == 0){
		printf("Senha correta!");
	}else{
		printf("Senha incorreta!");
	}
}

void AlteraSenha(){

	int i = 0;
	char senhaInserida[6]; 
	char SenhaMestre[6] = "210302";
		
	printf("Insira a senha mestre: ");
	scanf(" %s", &senhaInserida);

	i = strcmp(SenhaMestre, senhaInserida);
		
	if(i == 0){
		printf("Insira a nova senha: ");
		scanf(" %s", &senha);
	}else{
		printf("Senha mestre incorreta!");
	}	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao = 0;
	int i = 0;
	
	while(i == 0){
	
		printf("\nQual operação realizar? \n[1] - Abrir porta \n[2] - Alterar senha \n[3] - Sair do sistema\n");
		scanf(" %d", &opcao);
		
		switch(opcao){
			case 1:
				VerificaSenha();
			break;
			
			case 2:
				AlteraSenha();
			break;
			
			case 3:
				i = 1;
			break;
			
			default:
				printf("Opção inválida!");
		}
		
	}
	
	return 0;
}
