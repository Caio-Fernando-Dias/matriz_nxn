#include "matriz.h"

int main(){
	
	int tam_matriz;
	int opcao = 0;

	while(opcao != 2){
		menu();
		scanf("%d", &opcao);
		
		if(opcao == 1){
			printf("\nDIGITE O TAMANHO DA MATRIZ QUADRADA -> ");
			scanf("%d", &tam_matriz);
			
			int matriz[tam_matriz][tam_matriz];
			
			printf("\nCRIANDO MATRIZ...\n");
			inicia_matriz(tam_matriz, matriz);

			printf("\nIMPRIMINDO A MATRIZ ORIGINAL\n");
			imprimi(tam_matriz, matriz);
			
			printf("\nPERCORRENDO A MATRIZ...\n");
			anda_matriz(tam_matriz, matriz);


			printf("\nIMPRIMINDO O CAMINHO PERCORRIDO\n");
			imprimi(tam_matriz, matriz);
			
		} else if(opcao == 2){
			printf("\nFinalizando o programa...\n");
			
		}else{	
			printf("\nOpcao invalida!\n");
		}
	}
	
	return 0;
}
