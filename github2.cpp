#include<stdio.h>
#include<stdlib.h>
# define tamanho 5
//pilhas


// Estrutura da pilha 

struct tpilha {
	int dados[tamanho];
	int inicio, fim;
	
	
};


//variaveis globais 


struct tpilha pilha;

// prototipa??o 

void pilha_mostrar();
void pilha_inserir();
void pilha_remover();
void menu_mostrar();




int main(){
	
	// int dados[tamanho]
	int op;
	pilha.inicio = 0;
	pilha.fim=0;
	do{
		pilha_mostrar();
		menu_mostrar();
		scanf("%d", &op);
		switch(op){
			
			case 1: pilha_inserir(); break;
			case 2 : pilha_remover();break; 
		}
		
		
		
	}while(op!=0);	

	
	
	return 0;
}


// fun??o para mostrar o conte?do da pilha 
void pilha_mostrar(){
	int i;
	for(i=0;i<=tamanho;i++){
		printf("%d", pilha.dados[i]);
		
	}	
}

// fun??o para inserir o conte?do na pilha 
void pilha_inserir(){
	if (pilha.fim == tamanho){
		printf("\n\n pilha esta cheio\n ?impossivel empilhar ");
		system("pause");	
		
	}else{
		printf("\n digite o valor a ser empilhado \n ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}
	
	
}



// fun??o para remover o conte?do da pilha 
void pilha_remover(){
	if (pilha.inicio = pilha.fim){
		printf("\n pilha esta vazia, impossivel de");
		system("pause");	
		}else {
			
			pilha.dados[pilha.fim-1]=0;
			pilha.fim--;
		}
	
	
	
	
}

// Procedimento para remover o conte?do da pilha
////void menu_mostrar(){
	
	
//}

 
// fun??o para mostrar o menu
	void menu_mostrar(){
		printf("\n escolha uma das op??es abaixo ");
		printf("\n 1 inserir elemento ");
		printf("\n 2 remover elemento ");
		printf("\n 3 sair  ");
		
		
		
	}


