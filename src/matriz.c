#include "matriz.h"

int inicia_matriz(int n, int matriz[n][n]){
	int i;
	int j;
	//srand(time(NULL));
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			matriz[i][j] = rand() % 100;	
		}
	}
	return 0;
}

void anda_matriz(int n, int matriz[n][n]){
	
	int total = matriz[0][0];
	int atual = matriz[0][0];
	
	int i = 0; 
	int j = 0;
	
	int valoresquerda, valordireita, valorabaixo;
	
	while((j!= n - 1) || (i != n - 1)){
		if(j == 0 || j == n - 1 || i == n - 1){
			
			valoresquerda = 0;
			
		}else{
			
			matriz[i][j] = -1;
			valoresquerda = matriz[i][j - 1];
		}
		
		if(j == n - 1){
			
			valordireita = 0;
			
		}else{
			
			matriz[i][j] = -1;
			valordireita = matriz[i][j + 1];
		}
		
		if(i == n - 1){
			
			valorabaixo = 0;
			
		}else{
			
			matriz[i][j] = -1;
			valorabaixo = matriz[i + 1][j];
			
		}
		
		if(valordireita > valoresquerda && valordireita > valorabaixo && valordireita != atual){
			
			j++;
			atual = valordireita;
			total += atual;
			
		}
		
		if(valoresquerda > valordireita && valoresquerda > valorabaixo && valoresquerda != atual && i != n - 1){
			
			j--;
			atual = valoresquerda;
			total += atual;
			
		}
		
		if(valorabaixo > valordireita && valorabaixo > valoresquerda && i != n - 1){
			
			i++;
			atual = valorabaixo;
			total += atual;
			
		}
	}
	printf("\nO VALOR TOTAL OBTIDO ->");
	printf("%d", total);
}

void imprimi(int n, int matriz[n][n]){
	int i;
	int j;
	printf("\nIMPRIMINDO MATRIZ");
	printf("\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void menu(){
	printf("\n");
	printf("|____________________________|\n");
	printf("|____________MENU____________|\n");
	printf("| [1] Criar matriz ->        |\n");
	printf("| [2] Finalizar programa ->  |\n");
	printf("|____________________________|\n");
}


