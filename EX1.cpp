#include<stdio.h>
#include<locale.h>

int main(){
	char conceito;
	printf("digite o conceito\n");
	scanf("%c" , &conceito);
	switch(conceito){
		case 'A':
			printf("Aprendizagem Plena");
			break;
			case 'B':
			printf("parcialmenre Plena");
			break;
			case 'D':
				printf("insuficiente");
				break;
				default:
					printf("Conceito Invalido");
				
	}
	
	
	
	
	
	
	
return 0;	
}
