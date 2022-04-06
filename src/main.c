#include "matriz.h"

int main(){
	
	int tam_matriz;
	int opcao = 0;

	while(opcao != 2){
		menu();
		scanf("%d", &opcao);
		
		if(opcao == 1){
			printf("DIGITE O TAMANHO DA MATRIZ QUADRADA -> \n");
			scanf("%d", &tam_matriz);
			
			int matriz[tam_matriz][tam_matriz];
			
			inicia_matriz(tam_matriz, matriz);
			imprimi(tam_matriz, matriz);
			anda_matriz(tam_matriz, matriz);
			
		} else if(opcao == 2){
			printf("Finalizando o programa...");
			
		}else{	
			printf("Opcao invalida!");
		}
	}
	
	return 0;
}
